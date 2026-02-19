#include <iostream>
#include <stack>
using namespace std;

class Queue_S {
  private:
    stack<string> forward;
    stack<string> reverse;
    int capacity;

  public:
    Queue_S(int capacity) : capacity(capacity) {}

    bool isEmpty() {
        return forward.empty() && reverse.empty();
    }

    bool isFull() {
        return (forward.size() + reverse.size()) == capacity;
    }

    void enqueue(string val) {
        if (isFull())
            throw overflow_error("Queue is Full.");

        forward.push(val);
    }

    void dequeue() {
        if (isEmpty())
            throw underflow_error("Queue is Empty");

        if (reverse.empty()) {
            while (!forward.empty()) {
                reverse.push(forward.top());
                forward.pop();
            }
        }

        cout << "dequeued: " << reverse.top() << endl;
        reverse.pop();
    }
};

int main() {
    Queue_S myQueue(5);

    myQueue.enqueue("Sita");
    myQueue.enqueue("Rita");
    myQueue.enqueue("Gita");
    myQueue.enqueue("Pita");
    myQueue.enqueue("Nita");

    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();

    // throws an error cuz underflow
    myQueue.dequeue();
    return 0;
}