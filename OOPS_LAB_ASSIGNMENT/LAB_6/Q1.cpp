#include <iostream>
using namespace std;

#define size 10

class Book {
  public:
    string title;
    string author;
    long ISBN;
};

class Library {
    Book collection[size];

  public:
    bool addNewBook(string &title, string &author, long &ISBN);
    bool removeBook(long &ISBN);
    void displayDetails();
    void init() {
        for (int i = 0; i < size; i++) {
            collection[i].author = "";
            collection[i].title = "";
            collection[i].ISBN = 0;
        }
    }
};

bool Library::addNewBook(string &title, string &author, long &ISBN) {
    for (int i = 0; i < size; i++) {
        if (collection[i].ISBN == 0) {
            collection[i].title = title;
            collection[i].author = author;
            collection[i].ISBN = ISBN;
            return true;
        }
    }
    return false;
}

bool Library::removeBook(long &ISBN) {
    for (int i = 0; i < size; i++) {
        if (collection[i].ISBN == ISBN) {
            collection[i].author = "";
            collection[i].title = "";
            collection[i].ISBN = 0;
            return true;
        }
    }
    return false;
}

void Library::displayDetails() {
    for (int i = 0; i < size; i++) {
        if (collection[i].ISBN != 0) {
            cout << collection[i].title << " " << collection[i].author << " " << collection[i].ISBN << endl;
        }
    }
}

int main() {

    Library lib;
    lib.init();

    string title, author;
    long ISBN;

    title = "title_1";
    author = "author_1";
    ISBN = 473658;

    lib.addNewBook(title, author, ISBN);

    title = "title_2";
    author = "author_2";
    ISBN = 472020;

    lib.addNewBook(title, author, ISBN);

    title = "title_3";
    author = "author_3";
    ISBN = 47239398;

    lib.addNewBook(title, author, ISBN);

    title = "title_4";
    author = "author_4";
    ISBN = 4723484;

    lib.addNewBook(title, author, ISBN);

    title = "title_5";
    author = "author_5";
    ISBN = 4734859;

    lib.addNewBook(title, author, ISBN);

    lib.displayDetails();

    ISBN = 472020;
    lib.removeBook(ISBN);

    cout << endl << "After removal:\n";
    lib.displayDetails();

    return 0;
}