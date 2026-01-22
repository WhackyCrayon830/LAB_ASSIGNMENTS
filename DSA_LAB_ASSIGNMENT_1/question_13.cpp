#include <iostream>
using namespace std;

int main() {
    int target;
    int arr[] = {1, 2, 3, 6, 8, 4, 7};
    cin >> target;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i] == target)
        {
            cout << "The index is: " << i << endl;
            break;
        }  
    }
    return 0;
}