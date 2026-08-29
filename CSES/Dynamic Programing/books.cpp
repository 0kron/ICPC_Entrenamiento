#include <bits/stdc++.h>
using namespace std;
You are in a book shop which sells n different books. You know the price and number of pages of each book.
You have decided that the total price of your purchases will be at most x. What is the maximum number of pages you can buy? You can buy each book at most once.
Input
The first input line contains two integers n and x: the number of books and the maximum total price.
The next line contains n integers h_1,h_2,\ldots,h_n: the price of each book.
The last line contains n integers s_1,s_2,\ldots,s_n: the number of pages of each book.
Output
Print one integer: the maximum number of page
// Problem: Books - CSES 
/*
* n books, each with price and number of pages. You can spend at most x
* What is the maximum pages you can buy? 
* The idea is to build a dp table from the bottom up. 
* dp[book][budget] <- Max ammount of pages you can buy having seen up to that book with that ammount of budget
* To fill the table:
* you ask: Can I buy it? if you can't the best you can do is the last solution dp[book-1][x]
* If you can, you ask: Should you buy it? 
* You should buy it if the ammount of pages and the best solution with your new budget is greater than that of dp[book-1][x]
* You go through each book and increase the budget up to x, after that you go on to the next book. With each book you see you have more information. 
* at the end you just need to print dp[n][x]
*/

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
