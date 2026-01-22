#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 3; i++)
    {
        int complement = 6 - i - 1;
        int temp = arr[i];
        arr[i] = arr[complement];
        arr[complement] = temp;
    }
    
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
}