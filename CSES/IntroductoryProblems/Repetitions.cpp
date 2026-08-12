
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Repetitions - CSES 
/*
* First of all, note that the problem is character agnostic, meaning there is no
* need to store which protein is the one repeated, just the maximum sequence of
* repetitions, and thus, it is only needed to have a current and max count of
* said repetitions.
*
* The input can be stored in a char[] or a string, and we initialize the 
* previous array with a non valid protein, for example ' ', then, we only need 
* to read the entire string once with an account on the times the characters get
* changed up, which will reset the current count. Every step we can afford to 
* compare the current count with the max count.
*/

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   string adn;
   cin >> adn; 
   int mx_c = 0, count = 0; 
   char prev = ' ';
   for (auto i : adn){
      if (i != prev) count = 0;
      prev = i;
      count++;
      mx_c = max(count, mx_c);
   } // Complexity O(n)
   cout << mx_c << "\n"; 

   return 0;
}
