#include <iostream>
#include <vector>
using namespace std;

int main() {
    int first;
    int second;
    int carry = 0;
    int arr[5];

    //Input the numbers
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;

    if (first + second > 20000){
        cout << "Numbers too big!!" << endl;
        return -1;
    }

    for (int i = 0; i < 5; i++){
        int partial_sum = first%10 + second%10 + carry;
        carry = 0;

        if (partial_sum > 9){
            carry = partial_sum/10;
            arr[4-i] = partial_sum%10;
        }
        else arr[4-i] = partial_sum;

        first /= 10; second /= 10;
        partial_sum = 0;
    }

    cout << "SUM: ";
    for (int num : arr)
        cout << num;
    return 0;
}