#include <iostream>
#include <list>
#include <string>

using namespace std;

class HashTable {
private:
    int size;
    list<pair<int, string>> *table;

    int hashFunction(int key) {
        return key % size;
    }

public:
    HashTable(int s) {
        size = s;
        table = new list<pair<int, string>>[size];
    }

    ~HashTable() {
        delete[] table;
    }

    // Insert key-value pair
    void insert(int key, string value) {
        int index = hashFunction(key);

        // Update value if key already exists
        for (auto &item : table[index]) {
            if (item.first == key) {
                item.second = value;
                return;
            }
        }

        table[index].push_back({key, value});
    }

    // Search for a key
    string search(int key) {
        int index = hashFunction(key);

        for (auto item : table[index]) {
            if (item.first == key)
                return item.second;
        }

        return "Key not found";
    }

    // Delete a key
    void remove(int key) {
        int index = hashFunction(key);

        for (auto it = table[index].begin(); it != table[index].end(); it++) {
            if (it->first == key) {
                table[index].erase(it);
                cout << "Key deleted.\n";
                return;
            }
        }

        cout << "Key not found.\n";
    }

    // Display hash table
    void display() {
        for (int i = 0; i < size; i++) {
            cout << "[" << i << "] --> ";

            for (auto item : table[i]) {
                cout << "(" << item.first << ", " << item.second << ") -> ";
            }

            cout << "NULL\n";
        }
    }
};

int main() {
    HashTable ht(10);

    ht.insert(15, "Apple");
    ht.insert(25, "Banana");
    ht.insert(35, "Orange");
    ht.insert(20, "Mango");
    ht.insert(12, "Pear");

    cout << "Hash Table:\n";
    ht.display();

    cout << "\nSearch key 25: " << ht.search(25) << endl;
    cout << "Search key 99: " << ht.search(99) << endl;

    ht.remove(25);

    cout << "\nAfter deletion:\n";
    ht.display();

    return 0;
}
