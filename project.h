#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList(); // constructor
        ~LinkedList(); // destructor

        void insertAtHead(int val);
        void insertAtTail(int val);
        void insertAtIndex(int val, int index);

        void deleteHead();
        void deleteTail();
        void deleteAtIndex(int index);

        bool search(int val);
        int get(int index);
        bool isEmpty();
        void printList();
        void clear();
};

void printMessage();
