#include <iostream>
using namespace std;

class Person {
public:
    void details() {
        cout << "Person details recorded" << endl;
    }
};

class Teacher : virtual public Person {
public:
    void teaching() {
        cout << "Teaching students" << endl;
    }
};

class Student : virtual public Person {
public:
    void studying() {
        cout << "Studying subjects" << endl;
    }
};

class TeachingAssistant : public Teacher, public Student {
public:
    void assistantWork() {
        cout << "Working as Teaching Assistant" << endl;
    }
};

int main() {
    TeachingAssistant t;

    t.details();
    t.teaching();
    t.studying();
    t.assistantWork();

    return 0;
}
