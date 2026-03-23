#include <iostream>
using namespace std;

class Account {
    long acc_no;
    long trx_id;
    string trx_type;
    double balance;

public:

    // constructor with initializer list
    Account(long a_no, long id, string type, double bal)
        : acc_no(a_no), trx_id(id), trx_type(type), balance(bal) {}

    // transfer money FROM -> TO
    static long debitAmount(Account &to, Account &from, double amount) {
        if (from.balance >= amount) {
            from.balance -= amount;
            to.balance += amount;
            return from.trx_id;
        }
        return -1;
    }

    // opposite operation
    static long creditAmount(Account &to, Account &from, double amount) {
        if (from.balance >= amount) {
            from.balance -= amount;
            to.balance += amount;
            return to.trx_id;
        }
        return -1;
    }

    void displayDetails() const {
        cout << "\nAccount Number: " << acc_no;
        cout << "\nTransaction ID: " << trx_id;
        cout << "\nTransaction Type: " << trx_type;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {

    Account person_1(50237, 123, "Savings", 10000.0);
    Account person_2(50232, 124, "Savings", 5000.0);

    Account::creditAmount(person_1, person_2, 500);

    person_1.displayDetails();
    person_2.displayDetails();

    return 0;
}