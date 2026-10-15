#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Find the Difference of Two Arrays - Leet75

class Solution {
public:
   vector<vector<int>> findDifference(vi nums1, vi nums2){

      unordered_set<int> n1(nums1.begin(), nums1.end());
      unordered_set<int> n2(nums2.begin(), nums2.end());

      vector<vector<int>> result(2);

      for (int i : n1){
         if (!n2.count(i)) result[0].push_back(i);
      }

      for (int i : n2){
         if (!n1.count(i)) result[1].push_back(i);
      }

      return result;
   }
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
   vector<int> nums1 = {1, 2, 3, 3};
   vector<int> nums2 = {1, 1, 2, 2};

   vector<vector<int>> result = solve.findDifference(nums1, nums2);
   
   cout << "Answer 1: ";
   for (int i : result[0]) cout << i << ' ';
   cout << endl;

   cout << "Answer 2: ";
   for (int i : result[1]) cout << i << ' ';
   cout << endl;

   return 0;
}
