#include <iostream>
using namespace std;

class Student {
public:
    void studentDetails() {
        cout << "Student details recorded" << endl;
    }
};

class Performance : public Student {
public:
    void marks() {
        cout << "Student marks: 90" << endl;
    }
};

class Graduation : public Performance {
public:
    void honors() {
        cout << "Graduation Honors: Distinction" << endl;
    }
};

int main() {
    Graduation g;
    g.studentDetails();
    g.marks();
    g.honors();

    return 0;
}
