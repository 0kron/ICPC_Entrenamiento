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
   vector<int> productExceptSelf(vector<int> &nums){
      int n = nums.size();
      vector<int> pref(n + 1, 1), suf(n + 1, 1), result(n, 1);
      for (int i = 0; i < n; i++){
         pref[i + 1] = pref[i] * nums[i];
         suf[n - i - 1] = suf[n - i] * nums[n - i - 1];
      }

      for (int i = 0; i < n; i++){
         int l = (i == 0) ? 1 : pref[i];
         int r = (i == n - 1) ? 1 : suf[i + 1];
         result[i] = l * r;
      }
      return result;
   }
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
   vector<int> nums = {-1, 1, 0 , -3, 3};
   for (int i : solve.productExceptSelf(nums)) cout << i << ' ';
   cout << endl;

   return 0;
}
