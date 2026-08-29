#include <bits/stdc++.h>
using namespace std;
Consider an n \times n grid whose squares may have traps. It is not allowed to move to a square with a trap.
Your task is to calculate the number of paths from the upper-left square to the lower-right square. You can only move right or down.
Input
The first input line has an integer n: the size of the grid.
After this, there are n lines that describe the grid. Each line has n characters: . denotes an empty cell, and * denotes a trap.
Output
Print the number of paths modulo 10^9+7.
// Problem: Grid - CSES 
/*
* You've an n * n grid. Where * is a trap and . is an empty cell
* You can only land in empty cells, you objective is to count the number of ways modulo 1e9+7
* that you can go from the top left cell to the down right cell. 
* You can only move down and to the right. 
* The solutions comes from the simple insight that given your positions there are only
* two ways you could've arrived there. From the left cell or from the upper cell. 
* So the subproblem is to count the number of ways to get to the cell to your left and above you (if possible)
* That way you start from the upper left and you build your dp table by updating the number of ways to get to a given position. 
*/
 
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
