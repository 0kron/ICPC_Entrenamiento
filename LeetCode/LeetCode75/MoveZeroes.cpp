#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Can Place Flowers - LeetCode 75

class Solution {
public:
   void moveZeroes(vector<int>& nums){
      int i, j; i = j = 0;
      while (j < nums.size()){
         if (nums[j]){
            nums[i] = nums[j];
            i++;
         }
         j++;
      }
      while (i < nums.size()){
         nums[i] = 0;
         i++;
      }
   }
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
   vector<int> nums = {0};
   solve.moveZeroes(nums);
   for (int num : nums) cout << num << endl;

   return 0;
}
