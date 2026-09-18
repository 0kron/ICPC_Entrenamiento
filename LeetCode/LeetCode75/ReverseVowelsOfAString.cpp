#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Reverse Vowels of a String - LeetCode 75 

class Solution{
public:
   string reverseVowels(string s){
      vector<bool> appearences (s.size(), 0);
      stack<char> pila;
      string result = "";

      for (int i = 0; i < s.size(); i++){
         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
             s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
         {
            pila.push(s[i]);
            appearences[i] = 1;
         }
      }
      for (int i = 0; i < s.size(); i++){
         if (appearences[i]){
            result.push_back(pila.top());
            pila.pop();
         }
         else result.push_back(s[i]);
      }

      return result;
   }
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string w; cin >> w;
   Solution solve;
   cout << solve.reverseVowels(w) << endl;
   return 0;
}
