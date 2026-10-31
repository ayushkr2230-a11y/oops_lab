#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter year: ";
    cin >> year;

    int days = 1;

    // Check leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        days = 2;

    string months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (days == 2)
        monthDays[1] = 29;

    // Find starting day (1 Jan 0001 was Monday)
    int day = (year - 1 + (year - 1)/4 -
              (year - 1)/100 + (year - 1)/400) % 7;

    for (int i = 0; i < 12; i++) {
        cout << "\n\n      " << months[i] << " " << year << endl;
        cout << "Sun Mon Tue Wed Thu Fri Sat\n";

        for (int j = 0; j < day; j++)
            cout << "    ";

        for (int d = 1; d <= monthDays[i]; d++) {
            cout.width(3);
            cout << d << " ";

            day++;

            if (day == 7) {
                cout << endl;
                day = 0;
            }
        }
        if (day != 0)
            cout << endl;
    }

    return 0;
}
