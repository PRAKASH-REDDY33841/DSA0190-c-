#include <iostream>
#include <string>
#include <algorithm>  
using namespace std;

class StringConverter {
public:
    
    string toUpperCase(const string &str) {
        string upperStr = str;
        transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
        return upperStr;
    }

    string toLowerCase(const string &str) {
        string lowerStr = str;
        transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
        return lowerStr;
    }
};

int main() {
    StringConverter converter;
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Uppercase: " << converter.toUpperCase(input) << endl;
    cout << "Lowercase: " << converter.toLowerCase(input) << endl;

    return 0;
}

