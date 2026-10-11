#include <iostream>
using namespace std;

int main() {
    int totalSeconds, hours, minutes;

    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;

    cout << "Hours = " << hours << endl;
    cout << "Minutes = " << minutes << endl;
    return 0;
}
