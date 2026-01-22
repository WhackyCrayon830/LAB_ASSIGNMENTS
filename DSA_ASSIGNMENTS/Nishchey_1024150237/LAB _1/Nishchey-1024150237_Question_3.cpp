/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Find the GCD of two numbers
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>

using namespace std;

int main(){
    int first, second;

    cout << "Enter First Number: ";
    cin >> first; 
    cout << endl;
    cout << "Enter Second Number: ";
    cin >> second; 
    cout << endl;

    // Make numbers positive
    if (first < 0) first = -first;
    if (second < 0) second = -second;

    // Handle special case where both are zero
    if (first == 0 && second == 0) {
        cout << "GCD: undefined (both numbers are zero)" << endl;
        return 0;
    }

    while (second != 0) {
        int tmp = second;
        second = first % second;
        first = tmp;
    }

    cout << "GCD: " << first << endl;
    return 0;
}