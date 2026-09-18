#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Greates Common Divisor of String - LeetCode 75 

class Solution{
public:
   string gdcOfString(string str1, string str2){
      if (str1 + str2 != str2 + str1) return "";
      int m = gcd(str1.length(), str2.length());
      return str1.substr(0, m);
   }
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string w1, w2; cin >> w1 >> w2;
   Solution solve;
   cout << solve.gdcOfString(w1, w2) << endl;
   return 0;
}
