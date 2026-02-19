/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Infix, Postfix
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/

*/

#include <cctype> // for isalnum()
#include <iostream>
using namespace std;

#define STACK_SIZE 50
#define POSTFIX_SIZE 50

class Stack {
  private:
    char store[STACK_SIZE];
    int top;

  public:
    Stack() : top(-1) {}

    void push(char val) {
        if (top == STACK_SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        store[++top] = val;
    }

    char pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return '\0';
        }
        return store[top--];
    }

    char peek() {
        if (top == -1)
            return '\0';
        return store[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

int main() {
    string expression;
    cout << "Enter value: ";
    cin >> expression;

    char postfix[POSTFIX_SIZE];
    int k = 0;

    Stack s;

    for (char c : expression) {

        if (isalnum(c)) {
            postfix[k++] = c;
        }

        else if (c == '(') {
            s.push(c);
        }

        else if (c == ')') {
            while (!s.isEmpty() && s.peek() != '(') {
                postfix[k++] = s.pop();
            }
            s.pop(); // Remove '('
        }

        else {
            while (!s.isEmpty() && precedence(s.peek()) >= precedence(c)) {
                postfix[k++] = s.pop();
            }
            s.push(c);
        }
    }

    while (!s.isEmpty()) {
        postfix[k++] = s.pop();
    }

    postfix[k] = '\0';

    cout << "Postfix Expression: " << postfix << endl;

    return 0;
}
