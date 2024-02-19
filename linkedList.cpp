#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


void insertNode(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


void deleteNode(Node*& head, int value) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    Node* prev = nullptr;

    while (current != nullptr && current->data != value) {
        prev = current;
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Node with value " << value << " not found." << endl;
        return;
    }

    prev->next = current->next;
    delete current;
}

void displayList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    Node* head = nullptr;


    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 30);
    insertNode(head, 40);


    cout << "Initial list: ";
    displayList(head);


    deleteNode(head, 10);


    cout << "List after deleting node with value 10: ";
    displayList(head);

    return 0;
}
