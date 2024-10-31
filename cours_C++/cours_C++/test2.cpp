#include <iostream>
using namespace std;

class Node {
public:
    // data in the node
    int data;
    // pointer to the next node
    Node* next;

    // parameterized constructor
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Actual Linked list
class LinkedList {
public:
    // head being the node pointer
    Node* head;

    // default constructor
    LinkedList() {
        // By-Default it points to nothing
        this->head = nullptr;
    }

    // function declarations
    void insert_at_beginning(int data);
    void insert_at_end(int data);
    void insert_at_index(int data, int position);
    void delete_at_beginning();
    void delete_at_end();
    void delete_at_index();
    void display();
};
/*
int main() {
    LinkedList ll;
    ll.insert_at_beginning(51);
    ll.insert_at_beginning(11);
    ll.insert_at_beginning(21);
    ll.insert_at_end(111);
    ll.insert_at_beginning(32);
    ll.insert_at_beginning(99);
    ll.insert_at_beginning(1);
    ll.insert_at_index(data = 2, 3);
    ll.display();
    return 0;
}
*/