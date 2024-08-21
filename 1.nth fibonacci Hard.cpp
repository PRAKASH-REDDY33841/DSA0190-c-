#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the position of the Fibonacci number (N): ";
    cin >> n;

    int a = 0, b = 1, fib;
    if (n == 1) {
        cout << "The " << n << "st Fibonacci number is: " << a << endl;
    } else if (n == 2) {
        cout << "The " << n << "nd Fibonacci number is: " << b << endl;
    } else {
        for (int i = 3; i <= n; ++i) {
            fib = a + b;
            a = b;
            b = fib;
        }
        cout << "The " << n << "th Fibonacci number is: " << fib << endl;
    }

    return 0;
}

