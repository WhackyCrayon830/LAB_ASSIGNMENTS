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

bool checkSorted(const Node *head) {
    const Node *temp = head;
    while (temp->next != nullptr) {
        if (temp->data > temp->next->data) {
            return false;
        }
        temp = temp->next;
    }
    return true;
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
    Node *head1 = new Node(2);
    head1->next = new Node(3);
    head1->next->next = new Node(5);
    head1->next->next->next = new Node(4);

    Node *head2 = new Node(2);
    head2->next = new Node(3);
    head2->next->next = new Node(4);
    head2->next->next->next = new Node(5);

    traverse(head1);
    cout << endl;
    cout << (checkSorted(head1) == 1 ? "Sorted" : "Unsorted") << endl;
    cout << endl;
    traverse(head2);
    cout << endl;
    cout << (checkSorted(head2) == 1 ? "Sorted" : "Unsorted") << endl;
    return 0;
}