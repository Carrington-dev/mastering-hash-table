#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val) {
        value = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    Node* insert(Node* current, int val) {

        if (head == nullptr) {
            head = new Node(val);
            return head;
        }

        if (current->next == nullptr) {
            current->next = new Node(val);
            return current->next;
        }

        return insert(current->next, val);
    }

    void insert(int val) {
        insert(head, val);
    }

    Node* printNodes(Node* current) {

        if (current == nullptr) {
            return nullptr;
        }

        cout << current->value << " ";

        printNodes(current->next);

        return current;
    }

    void printNodes() {
        if (head == nullptr) {
            cout << "Linked List is empty\n";
            return;
        }

        printNodes(head);
        cout << endl;
    }
};

int main() {

    LinkedList list;

    list.printNodes();

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    list.printNodes();

    return 0;
}