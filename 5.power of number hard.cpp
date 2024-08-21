#include <iostream>
using namespace std;

int main() {
    double base;
    int exponent;
    double result = 1.0;

    cout << "Enter the base: ";
    cin >> base;
    
    cout << "Enter the exponent: ";
    cin >> exponent;

    if (exponent == 0) {
        result = 1.0; 
    } else if (exponent > 0) {
        for (int i = 1; i <= exponent; ++i) {
            result *= base; 
        }
    } else {

        for (int i = 1; i <= -exponent; ++i) {
            result *= base; 
        }
        result = 1.0 / result; 
    }

    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}

