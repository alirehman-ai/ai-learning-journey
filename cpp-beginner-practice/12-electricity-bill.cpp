#include <iostream>
using namespace std;

int main() {
    float units, rate, electricityCost, fixedCharges, finalBill;

    cout << "Enter units consumed: ";
    cin >> units;
    cout << "Enter per unit rate: ";
    cin >> rate;

    electricityCost = units * rate;
    fixedCharges = 100;
    finalBill = electricityCost + fixedCharges;

    cout << "Electricity Cost = " << electricityCost << endl;
    cout << "Fixed Charges = " << fixedCharges << endl;
    cout << "Final Bill = " << finalBill << endl;
    return 0;
}
