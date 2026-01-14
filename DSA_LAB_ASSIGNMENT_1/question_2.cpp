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