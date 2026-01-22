/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Sum till goal achieved or surpassed
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>

using namespace std;

int main(){
    int goal;
    cout << "Enter Goal: ";
    cin >> goal; 
    cout << endl;
    
    int sum = 0;
    int count = 0;

    while (sum < goal)
    {
        count++;
        sum = count*(count+1)/2;
    }
    cout << "n is: " << count;
    return 0;
}