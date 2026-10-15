#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Maximum Average Subarray I - Leet75

class Solution {
public:
   double findMaxAverage(vector<int>& nums, int k) {
      double sum = 0;

      for (int i = 0; i < k; i++) sum += nums[i];
      double max_avg = sum / k;

      int i = 0;
      while (i + k < nums.size()){
         sum = sum - nums[i] + nums[i+k];
         max_avg = max(max_avg, sum / k);
         i++;
      }
      return max_avg;
   }
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
   //test cases: vector<int> nums = {0};
   // solve.functionName(args);

   return 0;
}
