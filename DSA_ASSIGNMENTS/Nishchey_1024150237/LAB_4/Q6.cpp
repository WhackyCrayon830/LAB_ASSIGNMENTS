#include <iostream>
using namespace std;

class PriorityQueue {
  private:
    int *arr;
    int capacity;
    int size;

  public:
    PriorityQueue(int cap) : capacity(cap), size(0) {
        arr = new int[capacity];
    }

    ~PriorityQueue() {
        delete[] arr;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void enqueue(int value) {
        if (isFull()) {
            throw overflow_error("Priority Queue is Full!");
        }

        int i = size - 1;

        // Shift elements to maintain descending order
        while (i >= 0 && arr[i] < value) {
            arr[i + 1] = arr[i];
            i--;
        }

        arr[i + 1] = value;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            throw underflow_error("Priority Queue is Empty!");
        }

        cout << "Dequeued: " << arr[0] << endl; // Highest priority
        for (int i = 1; i < size; i++) {
            arr[i - 1] = arr[i];
        }
        size--;
    }

    void display() {
        if (isEmpty()) {
            cout << "Priority Queue is Empty!" << endl;
            return;
        }

        for (int i = 0; i < size; i++) {
            cout << i << " : " << arr[i] << endl;
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq(5);

    pq.enqueue(10);
    pq.enqueue(20);
    pq.enqueue(50);
    pq.enqueue(30);

    pq.display();

    pq.dequeue();
    pq.dequeue();
    pq.dequeue();
    pq.dequeue();
    return 0;
}