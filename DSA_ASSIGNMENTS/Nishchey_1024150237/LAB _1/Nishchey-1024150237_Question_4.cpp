/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Test for prime numbers
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int input;
    cout << "Enter a Integer: ";
    cin >> input;
    // (input % 2) == 0 ? cout << "Even" : cout << "Odd";

    for (int i = 2; i <= sqrt(input); i++)
    {
        if (input % i == 0)
        {
            cout << "It is Composite: " << i;
            return 0;
        }
        
    }
    cout << "It is Prime";
    return 0;
}