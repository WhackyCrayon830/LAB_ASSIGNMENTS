#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    long ISBN;

    Book() : title(""), author(""), ISBN(0) {}
};


class Library {

    Book* collection;
    int size;

public:

    Library(int size);
    ~Library();

    bool addNewBook(string &title, string &author, long &ISBN);
    bool removeBook(long &ISBN);
    void displayDetails();
};


Library::Library(int size) : size(size)
{
    collection = new Book[size];
}

Library::~Library()
{
    delete[] collection;
}


bool Library::addNewBook(string &title, string &author, long &ISBN)
{
    for (int i = 0; i < size; i++)
    {
        if (collection[i].ISBN == 0)
        {
            collection[i].title = title;
            collection[i].author = author;
            collection[i].ISBN = ISBN;
            return true;
        }
    }

    return false;
}


bool Library::removeBook(long &ISBN)
{
    for (int i = 0; i < size; i++)
    {
        if (collection[i].ISBN == ISBN)
        {
            collection[i].title = "";
            collection[i].author = "";
            collection[i].ISBN = 0;
            return true;
        }
    }

    return false;
}


void Library::displayDetails()
{
    for (int i = 0; i < size; i++)
    {
        if (collection[i].ISBN != 0)
        {
            cout << collection[i].title << " "
                 << collection[i].author << " "
                 << collection[i].ISBN << endl;
        }
    }
}


int main()
{
    int n;

    cout << "Enter library size: ";
    cin >> n;

    Library lib(n);   // dynamic size

    string title, author;
    long ISBN;

    title = "title_1";
    author = "author_1";
    ISBN = 111;
    lib.addNewBook(title, author, ISBN);

    title = "title_2";
    author = "author_2";
    ISBN = 222;
    lib.addNewBook(title, author, ISBN);

    lib.displayDetails();

    ISBN = 111;
    lib.removeBook(ISBN);

    cout << "\nAfter removal\n";
    lib.displayDetails();

    return 0;
}