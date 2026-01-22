#include <iostream>

using namespace std;

int fastsum(int n){
    
    int sum = n*(n+1);
    return sum;
}

int main(){
    int first, second;

    cout << "Enter First Number: ";
    cin >> first; 
    cout << endl;
    cout << "Enter Second Number: ";
    cin >> second; 
    cout << endl;
    
    int sum = fastsum((first > second) ? first : second) - fastsum((first > second) ? second-1 : first-1);

    cout << "Sum is: " << sum;
    return 0;
}
