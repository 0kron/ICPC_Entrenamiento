#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Kids With the Greatest Number of Candies - LeetCode 75

class Solution {
public:
   vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies){
      int m = 0;
      vector<bool> result(candies.size(), 0);
      for (int k : candies) m = max(m, k);
      for (int i = 0; i < candies.size(); i++){
         if (candies[i] + extraCandies >= m) result[i] = 1;
      }
      return result;
   }
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
   vector<int> candies = {2,3,5,1,3};
   int extraCandies = 3;
   vector<bool> res = solve.kidsWithCandies(candies, extraCandies);
   for (bool i : res) cout << i << ' ';
   cout << endl;
   return 0;
}
