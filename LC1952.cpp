#include <iostream>
#include <cmath>
using namespace std;

bool isThreeDivisors(int n) {
    // A number less than 4 cannot have exactly 3 divisors.
    if (n < 4) return false;
    
    int root = sqrt(n);
    // Check if n is a perfect square
    if (root * root != n) return false;
    
    // Check if the square root is a prime number.
    for (int i = 2; i <= sqrt(root); i++) {
        if (root % i == 0) return false;
    }
    
    return true;
}

int main() {
    int n;
    cin >> n;
    
    cout << (isThreeDivisors(n) ? "true" : "false") << endl;
    
    return 0;
}
