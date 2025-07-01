#include "project.h"


void printMessage() { // this was just a test method. i want to use some of this to make my linkedlist class
    Node* n1 = new Node{1, nullptr};
    Node* n2 = new Node{2, nullptr};
    Node* n3 = new Node{3, nullptr};

    n1->next = n2;
    n2->next = n3;

    cout << n1->next->next->data << endl;

    Node* head = new Node{0, nullptr};
    Node* current = head;
    for (int i=1; i<20; i++) {
        current->next = new Node{i, nullptr};
        current = current->next;
    }

    Node* c = head;
    while (c != nullptr) {
        cout << c->data << endl;
        c = c->next;
    }

    cout << "jack is the goat!";
    cout << "jack is cool as fuck";
}