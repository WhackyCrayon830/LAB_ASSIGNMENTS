#include <iostream>
using namespace std;

class Animal {
  public:
    void whatIsIt() {
        cout << "It is an animal." << endl;
    };
    void speak() {
        cout << "The Animal Made a Noise." << endl;
    }
};

class Duck : public Animal {
  public:
    void speak() {
        cout << "Quack!!" << endl;
    }
};

class Cat : public Animal {
  public:
    void speak() {
        cout << "Meow!!" << endl;
    }
};

class Dog : public Animal {
  public:
    void speak() {
        cout << "Woof!!" << endl;
    }
};

int main() {
    Dog snoopy;
    Cat ginger;
    Duck donald;

    snoopy.whatIsIt();
    ginger.whatIsIt();
    donald.whatIsIt();

    snoopy.speak();
    ginger.speak();
    donald.speak();

    return 0;
}