#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, r;
  cout << "Enter n and r: ";
  cin >> n >> r;

  vector<vector<long long>> dp(n + 1, vector<long long>(r + 1));

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= min(i, r); j++) {
      dp[i][j] = (j == 0 || j == i) ? 1 : (dp[i - 1][j - 1] + dp[i - 1][j]);
    }
  }

  cout << "Combinations: " << dp[n][r];
}