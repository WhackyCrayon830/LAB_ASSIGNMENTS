/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Searching for an element in an array through traversal
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

void traversal_search(const Node *head, int key) {
    const Node *temp = head;
    int count = 0;

    while (temp != nullptr) {
        count++;
        if (temp->data == key) {
            cout << "Element found at node: " << count << endl;
            temp = temp->next;
            break;
        }
        temp = temp->next;
    }
}

int main() {
    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);

    traversal_search(head, 4);
    return 0;
}