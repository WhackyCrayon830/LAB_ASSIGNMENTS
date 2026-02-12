/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Merging 2 linked lists
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

Node *merge(Node *head1, Node *head2) {
    Node out_list(0);
    Node *tail = &out_list;

    Node *cur1 = head1;
    Node *cur2 = head2;

    while (cur1 && cur2) {
        if (cur1->data <= cur2->data) {
            tail->next = cur1;
            cur1 = cur1->next;
        } else {
            tail->next = cur2;
            cur2 = cur2->next;
        }
        tail = tail->next;
    }

    tail->next = (cur1 != nullptr) ? cur1 : cur2;
    return out_list.next;
}

void traverse(const Node *head) {
    const Node *temp = head;
    while (temp->next != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << temp->data;
}

int main() {
    Node *head1 = new Node(1);
    head1->next = new Node(3);
    head1->next->next = new Node(5);
    head1->next->next->next = new Node(7);

    Node *head2 = new Node(2);
    head2->next = new Node(4);
    head2->next->next = new Node(6);
    head2->next->next->next = new Node(8);

    // Print the first two unmerged
    cout << "First LL: ";
    traverse(head1);
    cout << endl;
    cout << "Second LL: ";
    traverse(head2);
    cout << endl;

    Node *result = merge(head1, head2);

    cout << "Merged LL: ";
    traverse(result);
    return 0;
}