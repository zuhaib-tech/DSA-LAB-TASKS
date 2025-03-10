#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class SLL {
private:
    Node* head;

public:
    SLL() : head(nullptr) {}

    void insert_at_start(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        displayList();
    }

    void insert_at_end(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        displayList();
    }

    void displayList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    SLL list;
    list.insert_at_start(100);
    list.insert_at_start(200);
    list.insert_at_end(300);
    list.insert_at_end(400);
}
