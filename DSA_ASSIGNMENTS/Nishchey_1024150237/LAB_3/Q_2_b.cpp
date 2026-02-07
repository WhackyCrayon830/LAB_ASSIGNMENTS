#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = nullptr;
    }
    ~Node(){}

};

void count_sum(const Node *head){
    int sum = 0;
    int count = 0;
    const Node *temp = head;
    while (temp != nullptr){
        count++;
        sum += temp->data;
        temp = temp->next;
    }
    cout << "Count: " << count << " | " << "Sum: " << sum;
}

int main() {
    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);

    count_sum(head);
    return 0;
}