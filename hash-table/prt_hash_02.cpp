#include <iostream>

using namespace std;

 template <typename HashedObj>
 class HashTable
 {
    public:
        explicit HashTable( int size = 101 );

        bool contains( const HashedObj & x ) const;

        void makeEmpty( );
        bool insert( const HashedObj & x );
        bool insert( HashedObj && x );
        bool remove( const HashedObj & x );

        enum EntryType { ACTIVE, EMPTY, DELETED };

    private:
        struct HashEntry
        {
            HashedObj element;
            EntryType info;
            HashEntry( const HashedObj & e = HashedObj{ }, EntryType i = EMPTY ): element{ e }, info{ i } { }
            HashEntry( HashedObj && e, EntryType i = EMPTY ): element{ std::move( e ) }, info{ i } { }
        };

        vector<HashEntry> array;
        int currentSize;
        bool isActive( int currentPos ) const;
        int findPos( const HashedObj & x ) const;
        void rehash( );
        size_t myhash( const HashedObj & x ) const;
};