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
    Node *p1 = head1;
    Node *p2 = head2;

    while (p1 && p2) {
        Node *t1 = p1->next;
        Node *t2 = p2->next;

        p1->next = p2;
        if (!t1)
            break;

        p2->next = t1;

        p1 = t1;
        p2 = t2;
    }

    return head1;
}

Node *reverse(Node *head) {
    Node *prev = nullptr;
    Node *next = nullptr;
    Node *curr = head;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node *reorder_list(Node *head) {
    if (!head || !head->next)
        return head;

    Node *slow = head;
    Node *fast = head;

    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *prev = nullptr;
    Node *curr = slow->next;
    slow->next = nullptr;

    prev = reverse(curr);

    return merge(head, prev);
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
    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    cout << "LL: " << endl;
    traverse(head);
    cout << endl << endl;
    head = reorder_list(head);
    cout << "Reordered LL: " << endl;
    traverse(head);
    return 0;
}