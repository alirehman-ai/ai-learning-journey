// Corrected example of the student's age-calculator logic.
// Fixed example date: 7 October 2026. Update the date when needed.

#include <iostream>
using namespace std;

int main() {
    int birthYear, birthMonth, birthDate;
    const int currentYear = 2026;
    const int currentMonth = 10;
    const int currentDate = 7;
    int age;

    cout << "Enter birth year: ";
    cin >> birthYear;
    cout << "Enter birth month (1-12): ";
    cin >> birthMonth;
    cout << "Enter birth date: ";
    cin >> birthDate;

    age = currentYear - birthYear;

    if (birthMonth > currentMonth ||
        (birthMonth == currentMonth && birthDate > currentDate)) {
        age--;
    }

    cout << "Student age = " << age << " years" << endl;
    return 0;
}
