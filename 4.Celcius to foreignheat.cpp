#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << celsius << "�C is equal to " << fahrenheit << "�F" << endl;

    return 0;
}

