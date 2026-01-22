#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 6, 5, 4};

    int idx;

    for (int i = 0; i < 6; i++)
    {
        int max = 0;
        if (max < arr[i]){
            max = arr[i];
            idx = i;
        }
    }
    cout << "Index is: " << idx;
    
}