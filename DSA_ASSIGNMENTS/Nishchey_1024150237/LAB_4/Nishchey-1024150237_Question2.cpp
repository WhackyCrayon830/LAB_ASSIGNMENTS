/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Plates Stack (Array Implementation)
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/

*/

#include <iostream>
using namespace std;

#define SIZE 10

class Stack {
  private:
    string store[SIZE];
    int top;

  public:
    Stack() : top(-1) {}
    ~Stack() {}

    void push(string val) {
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

    void display() {
        if (top == -1) {
            cout << "Stack Empty" << endl;
            return;
        }
        cout << "-----------" << endl;
        for (int i = top; i > -1; i--) {
            cout << i << " : " << store[i] << endl;
        }
        cout << "-----------" << endl;
    }

    bool isFull() {
        return top == SIZE - 1;
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack plates;
    plates.push("Plate 1");
    plates.push("Plate 2");
    plates.push("Plate 3");
    plates.push("Plate 4");
    plates.push("Plate 5");

    plates.display();
    cout << endl;

    plates.pop();
    plates.pop();
    plates.pop();
    cout << endl;

    plates.display();
    return 0;
}