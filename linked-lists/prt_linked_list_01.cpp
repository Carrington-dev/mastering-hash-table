#include <iostream>

using namespace std;

class Node{

    public:
        int value;
        Node next;

        Node(int val){
            value = val;
            next = nullptr;
        }
};

class LinkedList{
    private:
        Node head = nullptr;

    public:
        LinkedList(): head(nullptr){}

        Node* insert(Node* current, int val){
            /*
            Node current is nullptr or head is nullptr
            */
            if(current == nullptr){
                if(head == nullptr){
                    head = new Node(val)
                    return &head;
                }

            }

            return nullptr;
        }

        

        Node* printNodes(Node* current){
            if(current == nullptr)
            {
                cout << "Empty Node Pointer" << endl;
                return nullptr;
            }
            cout << current->value << " ";
            printNodes(current->next);

            return current;
        }

        void printNodes(){
            printNodes(&head);
        }
}

int main(){
    // LinkedList linkedList = new LinkedList();
    // linkedList.printNodes();
    cout << "Empty header" << endl;
    return 0;
}