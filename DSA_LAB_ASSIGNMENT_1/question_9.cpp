#include <iostream>

using namespace std;

int main(){
 int arr[] = {1, 2, 4 ,5, 7, 8, 3, 4, 6, 2};
 int array_size = sizeof(arr)/sizeof(arr[0]);

 for (int i = 0; i < array_size; i++)
 {
    for (int j = i+1; j < array_size; j++)
    {
        if (arr[i] == arr[j])
        {   
            arr[j] = -1;
            int count = j;
            for (int k = j+1; k < array_size; k++)
            {
                arr[count++] = arr[k];
            }
        } 
    }

    cout << arr[i] << " ";
 }
}