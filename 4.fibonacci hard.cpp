#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the position of the Fibonacci number (N): ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
    } else if (n == 1) {
        cout << "The " << n << "st Fibonacci number is: 0" << endl;
    } else if (n == 2) {
        cout << "The " << n << "nd Fibonacci number is: 1" << endl;
    } else {
        int a = 0, b = 1, fib;
        

        for (int i = 3; i <= n; ++i) {
            fib = a + b;
            a = b;
            b = fib;
        }

        cout << "The " << n << "th Fibonacci number is: " << b << endl;
    }

    return 0;
}

