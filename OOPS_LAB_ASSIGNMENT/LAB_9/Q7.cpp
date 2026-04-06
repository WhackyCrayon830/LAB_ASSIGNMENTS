#include <iostream>
using namespace std;

#define SIZE 10

template <typename T> class Queue {
    T arr[SIZE];
    int front, rear;

  public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(T x) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1) {
            front = 0;
        }

        arr[++rear] = x;
    }

    T dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            exit(1);
        }

        return arr[front++];
    }

    void display() {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue<float> my_queue;
    my_queue.enqueue(4.3);
    my_queue.enqueue(2.3);
    my_queue.enqueue(4.7);

    my_queue.display();
}