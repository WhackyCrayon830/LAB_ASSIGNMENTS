#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void printArraay(const vector<int> &arr){
    for (int num : arr)
        cout << num << " ";
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {3, 7, 6, 8, 4, 1};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    unordered_map<int, int> map;

    for (int i = 0; i < size1; i++)
        map[arr1[i]]++;

    for (int i = 0; i < size2; i++)
        map[arr2[i]]++;

    cout << "Union: ";
    for (auto &entry : map)
        if (entry.second >= 1) cout << entry.first << " ";

    
    cout << endl << "Intersection: ";
    for (auto &entry : map)
        if (entry.second > 1) cout << entry.first << " ";
    
    return 0;
}