#include <iostream>
using namespace std;

#define SIZE 5

class Node {
  public:
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
    ~Node() {}
};

class A_Stack {
  private:
    int store[SIZE];
    int top;

  public:
    A_Stack() : top(-1) {}
    ~A_Stack() {}

    void push(int val) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        store[++top] = val;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return;
        }
        cout << "Popped: " << store[top--] << endl;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack Empty" << endl;
            return;
        }
        cout << "Top: " << store[top] << endl;
    }

    bool isFull() {
        return top == SIZE - 1;
    }

    bool isEmpty() {
        return top == -1;
    }
};

class L_Stack {
    Node *top;
    int size;

  public:
    L_Stack() : top(nullptr), size(0) {}
    ~L_Stack() {}

    void push(int val) {
        if (size == SIZE) {
            cout << "Stack Overflow" << endl;
            return;
        }
        Node *newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        size++;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node *temp = top;
        cout << "Popped" << top->data << endl;
        top = top->next;
        delete temp;
        size--;
    }

    void peek() {
        if (top == nullptr) {
            cout << "Stack Empty" << endl;
            return;
        }
        cout << "Top: " << top->data << endl;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    bool isFull() {
        return size == SIZE;
    }
};

int main() {
    A_Stack array_stack;
    L_Stack linked_list_stack;

    array_stack.push(10);
    array_stack.push(3);
    array_stack.push(7);
    array_stack.push(8);

    linked_list_stack.push(4);
    linked_list_stack.push(6);
    linked_list_stack.push(9);
    linked_list_stack.push(2);

    array_stack.pop();
    linked_list_stack.pop();

    cout << "Array Stack Empty?: " << array_stack.isEmpty() << endl;
    cout << "Linked List Stack Empty?: " << linked_list_stack.isEmpty() << endl;

    cout << "Array Stack Empty?: " << array_stack.isFull() << endl;
    cout << "Linked List Stack Empty?: " << linked_list_stack.isFull() << endl;

    return 0;
}