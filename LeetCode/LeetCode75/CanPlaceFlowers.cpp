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
   bool canPlaceFlowers(vector<int>& flowerbed, int n){
      int i = 0;
      while (i < flowerbed.size() && n) {
         bool freeRight = (i == 0) || (flowerbed[i-1] == 0);
         bool freeLeft = (i == flowerbed.size() - 1) || (flowerbed[i+1] == 0);

         if (freeRight && freeLeft && flowerbed[i] != 1){
            flowerbed[i] = 1;
            n--;
            i++;
         }
         i++;
      }

      return ((n == 0) ? true : false);
   }
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
   vector<int> flowerbed = {1, 0, 0, 0, 1};
   int n = 2;
   cout << solve.canPlaceFlowers(flowerbed, n) << endl;

   return 0;
}
