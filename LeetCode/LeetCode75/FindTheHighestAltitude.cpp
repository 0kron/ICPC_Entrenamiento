#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Find the Highest Altitude - Leet75

class Solution {
public:
   int largestAltitude(vector<int> &gain){
      int sum = 0, max_alt = 0;
      for (int i : gain){
         sum += i; 
         max_alt = max(max_alt, sum);
      }
      return max_alt;
   }
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
   vector<int> nums = {-4, -3, -2, -1, 4, 3, 2};
   cout << solve.largestAltitude(nums) << endl;

   return 0;
}
