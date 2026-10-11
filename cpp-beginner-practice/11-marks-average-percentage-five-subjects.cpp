#include <iostream>
using namespace std;

int main() {
    float marks[5];
    float total = 0, average, percentage;

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << " (out of 100): ";
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 5;
    percentage = (total / 500) * 100;

    cout << "Total Marks = " << total << " / 500" << endl;
    cout << "Average = " << average << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    return 0;
}
