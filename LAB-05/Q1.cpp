#include <iostream>
using namespace std;

class Library {
public:
    void formatCatalog() {
        cout << "Formatting library catalog..." << endl;
    }
};

class EBook : public Library {
public:
    void display() {
        cout << "Displaying Digital E-Book" << endl;
    }
};

int main() {
    EBook e;
    e.formatCatalog();
    e.display();

    return 0;
}
