#include <iostream>
using namespace std;

int main() {

    cout << "Theoretical Time Complexities (from Recursion Tree / Iterative Expansion)\n\n";

    cout << "1. T(n) = T(n-1) + 1\n";
    cout << "   Expansion: T(n) = 1 + 1 + ... + 1 (n times)\n";
    cout << "   => Time Complexity: O(n)\n\n";

    cout << "2. T(n) = T(n-1) + n\n";
    cout << "   Expansion: T(n) = n + (n-1) + ... + 1\n";
    cout << "   => Sum = n(n+1)/2\n";
    cout << "   => Time Complexity: O(n^2)\n\n";

    cout << "3. T(n) = T(n-1) + n^2\n";
    cout << "   Expansion: T(n) = n^2 + (n-1)^2 + ... + 1^2\n";
    cout << "   => Sum = n(n+1)(2n+1)/6\n";
    cout << "   => Time Complexity: O(n^3)\n\n";

    cout << "4. T(n) = T(n-1) + log(n)\n";
    cout << "   Expansion: T(n) = log(1) + log(2) + ... + log(n)\n";
    cout << "   => = log(n!)\n";
    cout << "   => Using Stirling approximation\n";
    cout << "   => Time Complexity: O(n log n)\n";

    return 0;
}