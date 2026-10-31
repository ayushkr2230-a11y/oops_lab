#include <iostream>
using namespace std;

void reverseSentence(string s, int n) {
    if (n < 0)
        return;

    cout << s[n];
    reverseSentence(s, n - 1);
}

int main() {
    string s;

    cout << "Enter a sentence: ";
    getline(cin, s);

    cout << "Reversed sentence: ";
    reverseSentence(s, s.length() - 1);

    return 0;
}
