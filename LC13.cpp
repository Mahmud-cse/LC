#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    // Mapping from Roman numeral characters to their integer values.
    unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int total = 0;
    int n = s.size();

    // Iterate through each character in the string.
    for (int i = 0; i < n; i++) {
        // If this is the last character, or if the current value is greater than or equal to the next value,
        // add the current value.
        if (i == n - 1 || roman[s[i]] >= roman[s[i + 1]])
            total += roman[s[i]];
        else
            // Otherwise, subtract the current value.
            total -= roman[s[i]];
    }
    
    return total;
}

int main() {
    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s;
    
    cout << "The integer value is: " << romanToInt(s) << endl;
    return 0;
}
