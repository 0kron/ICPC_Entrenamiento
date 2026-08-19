#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, i;
    cin >> n;
    cin >> x;
    int prices[n];
    int pages[n];
    for (i=0;i<n; i++){
        cin >> prices[i];
    }
    for (i=0; i<n; i++){
        cin >> pages[i];
    }

    int dp[n+1][x+1];
    // Fill zeroes
    for (i=0; i<n+1; i++){
        dp[i][0] = 0;
    }
    for (i=0; i<x+1; i++){
        dp[0][i] = 0;
    }

    int b, j, price, page;
    for (b=1; b<n+1; b++){
        for (j=0; j<x+1; j++){
            // can you afford the book?
            price = prices[b-1];
            page = pages[b-1];
            if (price <= j){
                // Should you take it?
                if((page + dp[b-1][j- price])>dp[b-1][j]){
                    dp[b][j] = page + dp[b-1][j-price]; 
                }
                else{
                    dp[b][j] = dp[b-1][j];
                }
            }
            else {
                dp[b][j] = dp[b-1][j];
            }
        }
    }
    cout << dp[n][x] << '\n';
}
