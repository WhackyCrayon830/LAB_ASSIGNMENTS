#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
    inline static int nextStudentID = 2000;

  public:
    int studentID;
    string name;

    Student(string n) : name(n) {
        studentID = ++nextStudentID;
    }

    void displayStudent() {
        cout << "||ID: " << studentID << " | NAME: " << name << "||";
    }
};

class Node {
  public:
    Student data;
    Node *next;
    Node *prev;

    Node(const Student &s) : data(s), next(nullptr), prev(nullptr) {}
};

class StudentList {
  private:
    Node *head;
    Node *tail;
    int size;

  public:
    StudentList() : head(nullptr), tail(nullptr), size(0) {}
    ~StudentList() {}

    void addStudent(const Student &s);
    void displayForward();
    void displayBackward();
    void countStudents();
    Student *searchStudentByID(int id);
    Student *searchStudentByName(string name);
    void deleteStudent(int id);
};

void StudentList::addStudent(const Student &s) {
    Node *newNode = new Node(s);

    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    size++;
}

void StudentList::displayForward() {
    if (!head) {
        cout << "HEAD -> NULL\n";
        return;
    }

    Node *curr = head;
    cout << "HEAD -> ";
    while (curr) {
        curr->data.displayStudent();
        cout << " <-> ";
        curr = curr->next;
    }
    cout << "NULL\n";
}

void StudentList::displayBackward() {
    if (!tail) {
        cout << "TAIL -> NULL\n";
        return;
    }

    Node *curr = tail;
    cout << "TAIL -> ";
    while (curr) {
        curr->data.displayStudent();
        cout << " <-> ";
        curr = curr->prev;
    }
    cout << "NULL\n";
}

void StudentList::countStudents() {
    cout << "\nTOTAL STUDENTS: " << size << endl;
}

Student *StudentList::searchStudentByID(int id) {
    Node *curr = head;
    while (curr) {
        if (curr->data.studentID == id)
            return &(curr->data);
        curr = curr->next;
    }
    return nullptr;
}

Student *StudentList::searchStudentByName(string name) {
    Node *curr = head;
    while (curr) {
        if (curr->data.name == name)
            return &(curr->data);
        curr = curr->next;
    }
    return nullptr;
}

void StudentList::deleteStudent(int id) {
    if (!head)
        return;

    Node *curr = head;

    while (curr) {
        if (curr->data.studentID == id) {

            if (curr == head) {
                head = head->next;
                if (head)
                    head->prev = nullptr;
                else
                    tail = nullptr;
            } else if (curr == tail) {
                tail = tail->prev;
                tail->next = nullptr;
            } else {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
            }

            delete curr;
            size--;
            return;
        }
        curr = curr->next;
    }
}

int main() {
    StudentList list;

    list.addStudent(Student("Aman"));
    list.addStudent(Student("Riya"));
    list.addStudent(Student("Karan"));
    list.addStudent(Student("Neha"));

    cout << "\nDisplay Forward:\n";
    list.displayForward();
    list.countStudents();

    cout << "\nDisplay Backward:\n";
    list.displayBackward();

    int searchID = 2002;
    Student *found = list.searchStudentByID(searchID);
    if (found) {
        cout << "\nFound Student: ";
        found->displayStudent();
        cout << endl;
    }

    cout << "\nDeleting Student ID 2003\n";
    list.deleteStudent(2003);

    list.displayForward();
    list.countStudents();

    return 0;
}
