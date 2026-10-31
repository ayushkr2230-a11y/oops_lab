#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollno;
    int n;
    string subject[10];
    float marks[10];
    float cgpa;
};

int main() {
    Student s;

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.rollno;

    cout << "Enter number of subjects: ";
    cin >> s.n;

    for (int i = 0; i < s.n; i++) {
        cout << "Enter subject " << i + 1 << ": ";
        cin >> s.subject[i];

        cout << "Enter marks: ";
        cin >> s.marks[i];
    }

    cout << "Enter CGPA: ";
    cin >> s.cgpa;

    cout << "\n----- Student Information -----" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollno << endl;

    for (int i = 0; i < s.n; i++) {
        cout << "Subject: " << s.subject[i] << endl;
        cout << "Marks: " << s.marks[i] << endl;
    }

    cout << "CGPA: " << s.cgpa << endl;

    return 0;
}
