#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0)
        return false;
    
    // Convert the number to a string
    string s = to_string(x);
    
    // Create a reversed copy of the string
    string rev = s;
    reverse(rev.begin(), rev.end());
    
    // Check if the original string and the reversed string are the same
    return s == rev;
}

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    
    if (isPalindrome(x))
        cout << x << " is a palindrome." << endl;
    else
        cout << x << " is not a palindrome." << endl;
    
    return 0;
}
