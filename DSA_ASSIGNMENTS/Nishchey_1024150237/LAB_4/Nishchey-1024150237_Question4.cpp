/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Implementation of the Vehicular Queue
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/

*/

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
            cout << "\nQueue Full!\n" << endl;
            return;
        }

        int rear = (front + size) % capacity;
        storage[rear] = plate;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue Empty!" << endl;
            return;
        }
        cout << "Car with plate: " + storage[front] + " Dequeued" << endl;
        front = (front + 1) % capacity;
        size--;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            int index = (front + i) % capacity;
            cout << "Plt_No: " << storage[index] << endl;
        }
    }
};

int main() {
    Queue vehicleQueue(5);

    // Light is red
    vehicleQueue.enqueue("PB08AN2134");
    vehicleQueue.enqueue("UP12SN3453");
    vehicleQueue.enqueue("AR01RA8125");
    vehicleQueue.enqueue("PB09LM9887");
    vehicleQueue.enqueue("HR03AN1111");

    // Light Yellow we display the Queue
    vehicleQueue.display();

    // Light turns green
    vehicleQueue.dequeue();
    vehicleQueue.dequeue();
    vehicleQueue.dequeue();
    vehicleQueue.dequeue();
    vehicleQueue.dequeue();
    return 0;
}