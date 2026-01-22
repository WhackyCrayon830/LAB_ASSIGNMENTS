#include <iostream>
using namespace std;


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};
    int sum = 0;
    for (int num : arr) sum+=num;
    cout << sum << endl;
    return 0;
}