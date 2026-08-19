#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// Read input
	int n;
	cin >> n;
	vector<string> grid(n);
	for (int i = 0; i <n; i++){
		cin >> grid[i];
	}
 
	// Build the dp table
	vector<vector<int>> dp(n, vector<int>(n));
    const int MOD = 1e9 + 7; // to avoid int overflow
	dp[0][0] = 1;
	for (int row = 0; row < n; row++){
		for (int col = 0; col < n; col++){
			if (grid[row][col] == '*') {
				dp[row][col] = 0;
				continue;
			}
            if (row == 0 && col == 0){
                continue;
            }
            if (row != 0){
                dp[row][col] += dp[row-1][col];
            }
			if (col != 0){
                dp[row][col] += dp[row][col-1];
			}
            dp[row][col] %= MOD;
		}
	}
 
	cout << dp[n-1][n-1];
	return 0;
}
