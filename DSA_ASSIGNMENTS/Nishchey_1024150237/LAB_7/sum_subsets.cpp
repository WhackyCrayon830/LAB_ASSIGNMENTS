#include <bitset>
#include <iostream>
#include <vector>

using namespace std;

void generate_subsets(vector<int> set, int target) {
    int n = set.size();

    for (int i = 0; i < (1 << n); i++) {
        bitset<10> binary(i);
        int sum = 0;

        for (int j = 0; j < n; j++) {
            if (binary[j])
                sum += set[j];
        }

        if (sum == target) {
            for (int j = 0; j < n; j++) {
                if (binary[j])
                    cout << set[j] << " ";
            }

            cout << endl;
        }
    }
}

int main() {
    vector<int> set = {3, 34, 4, 12, 5, 2};
    generate_subsets(set, 9);
}