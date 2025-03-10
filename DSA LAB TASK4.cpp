#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};
class SLL {
private:
    Node* head;
public:
    SLL() : head(nullptr) {}

    void insert_at_pos(int pos, int d) 
	{
        if (pos < 1) 
		{
            cout << "Invalid Position" << endl;
            return;
        }
        Node* newNode = new Node(d);

        if (pos == 1) 
		{
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        int i = 1;
        while (temp && i < pos - 1) 
		{
            temp = temp->next;
            i++;
        }
        if (!temp) 
		{
            cout << "Invalid Position" << endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void print_list() 
	{
        if (!head) 
		{
            cout << "Empty" << endl;
            return;
        }
        Node* temp = head;
        while (temp) 
		{
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    SLL list;
    list.insert_at_pos(1, 10);
    list.insert_at_pos(2, 20);
    list.insert_at_pos(2, 15);
    list.insert_at_pos(4, 25);
    list.insert_at_pos(3, 30);
    list.print_list();
}
