#include <stdio.h>
#include <stdbool.h>

bool subsetSum(int set[], int n, int sum) {
    bool dp[n+1][sum+1];

    for(int i = 0; i <= n; i++)
        dp[i][0] = true;

    for(int j = 1; j <= sum; j++)
        dp[0][j] = false;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= sum; j++) {

            if(set[i-1] > j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j-set[i-1]];
        }
    }

    return dp[n][sum];
}

int main() {
    int set[] = {2,8,6,10,5,7};
    int n = 6;
    int sum;

    printf("Enter required sum: ");
    scanf("%d", &sum);

    if(subsetSum(set, n, sum))
        printf("Subset with given sum exists");
    else
        printf("No subset with given sum");

    return 0;
}