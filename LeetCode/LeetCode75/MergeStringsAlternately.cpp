#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Merge Strings Alternately - LeetCode 75 

class Solution {
public: 
   string mergeAlternately(string word1, string word2){
      string res = "";
      int n = max(word1.length(), word2.length());
      for (int i = 0; i < n; i++){
         if (i < word1.length()) res.push_back(word1[i]);
         if (i < word2.length()) res.push_back(word2[i]);
      }
      return res;
   }
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   string w1, w2; cin >> w1 >> w2;
   Solution solve;
   cout << solve.mergeAlternately(w1, w2) << endl;

   return 0;
}
