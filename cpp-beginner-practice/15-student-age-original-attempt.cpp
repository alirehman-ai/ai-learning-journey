// Original attempt supplied by the student.
// Review note: birthMonth is declared but never read from input,
// so the condition uses an uninitialized variable.

#include <iostream>
using namespace std;

int main() {
    int birthYear, birthDate, birthMonth;
    int currentYear = 2026;
    int currentDate = 7;
    int currentMonth = 10;
    int age;

    cout << "Enter birth year: ";
    cin >> birthYear;
    cout << "Enter birth date: ";
    cin >> birthDate;

    age = currentYear - birthYear;
    if (birthMonth > currentMonth ||
        (birthMonth == currentMonth && birthDate > currentDate)) {
        age = age - 1;
    }

    cout << "Student age = " << age << "years" << endl;
    return 0;
}
