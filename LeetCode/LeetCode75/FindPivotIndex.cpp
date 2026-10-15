#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Find Pivot Index - Leet75

class Solution {
public:
   int pivotIndex(vector<int>& nums){
      vector<int> news(nums.size(), 0);
      news[0] = nums[0];
      for (int i = 1; i < news.size(); i++){
         news[i] = news[i-1] + nums[i];
      }
      if (news[news.size() - 1] - news[0] == 0) 
         return 0;

      for (int i = 1; i < news.size(); i++){
         if (news[i-1] == news[news.size() - 1] - news[i])
            return i;
      }
      if (news.size() > 1 && news[news.size() - 2] == 0)
         return news.size() - 1;

      return -1;
   }
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
   vector<int> nums = {2, 1, -1};
   cout << solve.pivotIndex(nums) << endl;

   return 0;
}
