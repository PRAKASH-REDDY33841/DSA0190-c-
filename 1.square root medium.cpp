#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double number, result;

   
    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number < 0) {
        cout << "Error: Cannot calculate the square root of a negative number." << endl;
    } else {
        result = sqrt(number);
        cout << "The square root of " << number << " is: " << result << endl;
    }

    return 0;
}

