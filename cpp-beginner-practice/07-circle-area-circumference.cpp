#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159f;
    float radius, circumference, area;

    cout << "Enter radius: ";
    cin >> radius;

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    cout << "Circumference = " << circumference << endl;
    cout << "Area = " << area << endl;
    return 0;
}
