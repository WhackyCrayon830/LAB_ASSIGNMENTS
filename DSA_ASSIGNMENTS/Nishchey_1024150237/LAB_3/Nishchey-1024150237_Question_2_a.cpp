/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Linked List traversal
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

int main() {
    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);

    traverse(head);
    return 0;
}