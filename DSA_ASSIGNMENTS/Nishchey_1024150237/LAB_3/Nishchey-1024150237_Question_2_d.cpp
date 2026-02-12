/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Deletion in an array
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
    ~Node() {}
};

void traverse(const Node *head) {
    const Node *temp = head;
    while (temp->next != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << temp->data;
}

Node *delete_at(Node *head, int pos) {
    if (head == nullptr || pos < 1) {
        cout << "Invalid List or Position" << endl;
        exit(-1);
    } else if (pos == 1) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    } else if (pos > 1) {
        Node *prev = nullptr;
        Node *temp = head;
        for (int i = 1; i < pos; i++) {
            prev = temp;
            temp = temp->next;
            if (temp == nullptr) {
                cout << "Invalid Position" << endl;
                exit(-1);
            }
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
    return head;
}

int main() {
    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;

    traverse(head);
    cout << endl;
    head = delete_at(head, pos);
    cout << endl;
    traverse(head);

    return 0;
}