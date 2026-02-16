#include <iostream>
using namespace std;

// Base Class
class Book {
  protected:
    string title;
    string author;
    double price;

  public:
    // Constructor
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    void displayBookInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

// Derived Class
class Textbook : public Book {
  private:
    string subject;

  public:
    // Constructor calling base constructor
    Textbook(string t, string a, double p, string s) : Book(t, a, p) {
        subject = s;
    }

    void displayTextbookInfo() {
        displayBookInfo(); // inherited function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    cout << "General Book:\n";
    Book b1("The Alchemist", "Paulo Coelho", 499);
    b1.displayBookInfo();

    cout << "\nTextbook:\n";
    Textbook t1("Engineering Mathematics", "B.S. Grewal", 799, "Mathematics");
    t1.displayTextbookInfo();

    return 0;
}
