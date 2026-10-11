#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a = 23, b = 523;
    float value = 2.32697f;

    cout << a << setw(6) << b << endl;
    cout << fixed << setprecision(1) << value << endl;
    return 0;
}
