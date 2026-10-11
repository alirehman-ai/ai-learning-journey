#include <iostream>
using namespace std;

int main() {
    float basicSalary, houseRent, medicalAllowance, otherAllowance;
    float grossSalary;

    cout << "Enter basic salary: ";
    cin >> basicSalary;
    cout << "Enter house rent allowance: ";
    cin >> houseRent;
    cout << "Enter medical allowance: ";
    cin >> medicalAllowance;
    cout << "Enter other allowance: ";
    cin >> otherAllowance;

    grossSalary = basicSalary + houseRent + medicalAllowance + otherAllowance;
    cout << "Gross Salary = " << grossSalary << endl;
    return 0;
}
