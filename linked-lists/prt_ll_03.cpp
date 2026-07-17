#include <iostream>

using namespace std;


class Node{
    public:
        int value;
        Node* next;

        Node(int value): value(value), next(nullptr){

        }
};

class LinkedList{
    public:
        Node* head;
        LinkedList(){
            head = nullptr;
            cout << "initialized LinkedList" << endl;
        }

        void insert(int val){
            insert(head, val);
        }

        Node* insert(Node* current, int val){
            if(head == nullptr){
                head = new Node(val);
                cout << "running insert " << val << " -> ";
                return head;
            }

            if(current->next == nullptr){
                current->next = new Node(val);
                return current->next;
            }

            return insert(current->next, val);
        }


        void print(){
            if(head == nullptr) return;
            
            cout << "Printing Nodes" << endl;
            print(head);
            cout << endl;
        }



        Node* print(Node* current){
            if(current == nullptr){\
                cout << "empty node" << endl;
                return nullptr;
            }
            cout << current->value << " ";
            print(current->next);
            return current;
        }


        void printNodes(){
            Node* current = head;
            while ( current != nullptr){
                cout << current->value << "->";
                current = current->next;
            }
            cout << endl;
        }
};

int main(){
    LinkedList* linkedList = new LinkedList();
    linkedList->printNodes();
    linkedList->insert(23);
    linkedList->insert(35);
    linkedList->insert(12);
    linkedList->insert(7);
    linkedList->insert(56);
    linkedList->insert(65);
    linkedList->insert(5);
    linkedList->insert(4);
    linkedList->insert(9);
    linkedList->insert(16);
    linkedList->insert(61);
    linkedList->insert(31);
    linkedList->print();
    return 0;
}