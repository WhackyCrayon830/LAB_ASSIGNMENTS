#include <iostream>
using namespace std;

class Student {
  public:
    virtual void getData() = 0;
    virtual void display() = 0;
};

class Engineering : public Student {
    int roll;
    string name;

  public:
    void getData() {
        cout << "Engineering Student\n";
        cout << "Enter roll and name: ";
        cin >> roll >> name;
    }
    void display() {
        cout << "Engineering -> Roll: " << roll << " Name: " << name << endl;
    }
};

class Medicine : public Student {
    int roll;
    string name;

  public:
    void getData() {
        cout << "Medicine Student\n";
        cout << "Enter roll and name: ";
        cin >> roll >> name;
    }
    void display() {
        cout << "Medicine -> Roll: " << roll << " Name: " << name << endl;
    }
};

class Science : public Student {
    int roll;
    string name;

  public:
    void getData() {
        cout << "Science Student\n";
        cout << "Enter roll and name: ";
        cin >> roll >> name;
    }
    void display() {
        cout << "Science -> Roll: " << roll << " Name: " << name << endl;
    }
};

int main() {
    Student *s[3];

    Engineering e;
    Medicine m;
    Science sc;

    s[0] = &e;
    s[1] = &m;
    s[2] = &sc;

    for (int i = 0; i < 3; i++)
        s[i]->getData();

    for (int i = 0; i < 3; i++)
        s[i]->display();

    return 0;
}