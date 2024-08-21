#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int missingElement = -1; 
    int i = 0;
    while (i < n) {
        if (arr[i] != i) {
            missingElement = i;
            break;
        }
        i++;
    }

    if (missingElement == -1) {
        missingElement = n;
    }

    cout << "The smallest missing element is: " << missingElement << endl;

    return 0;
}

