#include <iostream>
using namespace std;

int main() {
    float laptop, mouse, keyboard;
    float total, discount, discountedAmount, tax, finalAmount;

    cout << "Enter laptop price: ";
    cin >> laptop;
    cout << "Enter mouse price: ";
    cin >> mouse;
    cout << "Enter keyboard price: ";
    cin >> keyboard;

    total = laptop + mouse + keyboard;
    discount = total * 10 / 100;
    discountedAmount = total - discount;
    tax = discountedAmount * 18 / 100;
    finalAmount = discountedAmount + tax;

    cout << "Total Amount = " << total << endl;
    cout << "10% Discount = " << discount << endl;
    cout << "After Discount = " << discountedAmount << endl;
    cout << "18% Tax = " << tax << endl;
    cout << "Final Amount = " << finalAmount << endl;
    return 0;
}
