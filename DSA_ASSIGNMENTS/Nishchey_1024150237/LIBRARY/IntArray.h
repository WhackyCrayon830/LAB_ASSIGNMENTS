#ifndef INTARRAY_H
#define INTARRAY_H

#include <initializer_list>
#include <stdexcept>
#include <iostream>

class IntArray {
private:
    int* data;
    int size;

public:
    explicit IntArray(int n) : size(n), data(new int[n]{}) {}

    ~IntArray() {
        delete[] data;
    }

    int getSize() const {
        return size;
    }

    int& operator[](int index) {
        if (index < 0 || index >= size)
            throw std::out_of_range("Index out of bounds");
        return data[index];
    }

    IntArray& operator=(std::initializer_list<int> list) {
        if (list.size() > size)
            throw std::out_of_range("Too many elements");

        int i = 0;
        for (int v : list)
            data[i++] = v;

        return *this;
    }

    IntArray& operator=(const IntArray& other) {
        if (this == &other)
            return *this;

        delete[] data;
        size = other.size;
        data = new int[size];

        for (int i = 0; i < size; i++)
            data[i] = other.data[i];

        return *this;
    }

    void copyData(const IntArray& other, int offset = 0) {
        if (other.size + offset > size)
            throw std::out_of_range("Not enough space");

        for (int i = 0; i < other.size; i++)
            data[i + offset] = other.data[i];
    }

    void insert(int data, int index){

    }

    void print() const {
        for (int i = 0; i < size; i++)
            std::cout << data[i] << " ";
        std::cout << "\n";
    }
};

#endif