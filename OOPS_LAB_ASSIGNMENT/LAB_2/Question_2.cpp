#include <iostream>
#include <cstring>
using namespace std;

void printstr(const char arr[]){
    for (int i = 0; arr[i] != '\0'; i++) cout << arr[i];
}

class Student
{
    char name[20];
    char degree[30];
    char hostel[10];
    int roll_no;
    float cgpa;

    void addDetails(const char n[], const char d[], const char h[], int r, float c){
        strcpy(name, n);
        strcpy(degree, d);
        strcpy(hostel, h);
        roll_no = r;
        cgpa = c;
    }
    public:
    void updateDetails(const char n[], const char d[], const char h[], int r, float c){
        addDetails(n, d, h, r, c);
    }
    void updateCGPA(float cgpa){
        this->cgpa = cgpa;
    }
    void displayDetails(){
        cout << "Name: ";
        printstr(name);
        cout << endl;
        cout << "RollNo: " << roll_no << endl;
        cout << "Degree: ";
        printstr(degree);
        cout << endl;
        cout << "Hostel: ";
        printstr(hostel);
        cout << endl;
        cout << "cgpa: " << cgpa << endl;
    }
};


int main() {
    Student Nischey;
    Nischey.updateDetails("Nishchey", "ENC", "HOSTEL-D", 1024150237, 9.2);
    Nischey.displayDetails();
    return 0;
}