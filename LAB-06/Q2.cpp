#include <iostream>
using namespace std;

class Account {
public:
    void ledger() {
        cout << "Account ledger updated" << endl;
    }
};

class SavingsAccount : public Account {
public:
    void interest() {
        cout << "Savings account interest calculated" << endl;
    }
};

class CheckingAccount : public Account {
public:
    void transaction() {
        cout << "Checking account transaction processed" << endl;
    }
};

int main() {
    SavingsAccount s;
    CheckingAccount c;

    s.ledger();
    s.interest();

    c.ledger();
    c.transaction();

    return 0;
}
