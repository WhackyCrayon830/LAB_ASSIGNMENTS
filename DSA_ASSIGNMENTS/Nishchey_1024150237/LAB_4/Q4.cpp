#include <iostream>
using namespace std;

class Vehicle {
  private:
    string number_plate;
};

class Queue {
  private:
    string *storage;
    int front;
    int size;
    int capacity;

  public:
    Queue(int capacity) : capacity(capacity), storage(new string[capacity]), size(0), front(0) {}
    ~Queue() {}

    void enqueue(string plate) {
        if (size == capacity) {
            cout << "Queue Full!" << endl;
            return;
        }

        int rear = (front + size) % capacity;
        storage[rear] = plate;
        size++;
    }
};

int main() {

    return 0;
}