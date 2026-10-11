#include <iostream>
using namespace std;

int main() {
    int quantity;
    float price, totalBill = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Item " << i << " quantity: ";
        cin >> quantity;
        cout << "Item " << i << " price per unit: ";
        cin >> price;

        totalBill += quantity * price;
    }

    cout << "Total Bill = " << totalBill << endl;
    return 0;
}
