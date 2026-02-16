#include <iostream>
using namespace std;

// Base Class
class LibraryUser {
  protected:
    string name;
    int id;
    string contact;

  public:
    LibraryUser(string name, int id, string contact) {
        this->name = name;
        this->id = id;
        this->contact = contact;
    }

    void displayUserInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact: " << contact << endl;
    }
};

// Derived Class 1
class Student : public LibraryUser {
  private:
    string gradeLevel;

  public:
    Student(string name, int id, string contact, string gradelevel) : LibraryUser(name, id, contact) {
        gradeLevel = gradelevel;
    }

    void displayStudentInfo() {
        displayUserInfo();
        cout << "Grade Level: " << gradeLevel << endl;
    }
};

// Derived Class 2
class Teacher : public LibraryUser {
  private:
    string department;

  public:
    Teacher(string name, int id, string contact, string dept) : LibraryUser(name, id, contact) {
        department = dept;
    }

    void displayTeacherInfo() {
        displayUserInfo();
        cout << "Department: " << department << endl;
    }
};

int main() {
    cout << "Student Details:\n";
    Student s1("Rahul Sharma", 101, "9876543210", "3rd Year");
    s1.displayStudentInfo();

    cout << "\nTeacher Details:\n";
    Teacher t1("Dr. Mehta", 201, "9123456780", "Computer Science");
    t1.displayTeacherInfo();

    return 0;
}
