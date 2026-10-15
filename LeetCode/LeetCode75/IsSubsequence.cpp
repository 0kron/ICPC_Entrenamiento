#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Is Subsecuence - Leet75

class Solution {
public:
   bool isSubsequence(string s, string t){
      auto j = t.begin();
      int i = 0;
      while (j != t.end() && i < s.size()){
         j = find(j, t.end(), s[i]);
         cout << s[i] << ' ' << j - t.begin() << endl;
         if (j != t.end()){
            i++;
            j++;
         }
      }
      if (i == s.size()) return true;
      return false;
   }
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
   string s = "aaaaaa", t = "bbaaaa";
   cout << solve.isSubsequence(s, t) << endl;

   return 0;
}
