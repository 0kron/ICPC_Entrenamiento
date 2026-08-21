#include <bits/stdc++.h>
#define end "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Apartments - CSES 
/*
* n applicants, on m free aparments, with desired size and a k of allowed 
* difference. Then, the desired apartment size for each i-applicant. 
* Last line are the m-departments by size. 
* The idea is to sort the apartments and the desires of the applicants in a 
* increasing order, to iterate through every apartment and counting how many
* aparments where used. As there is no need to explicit say which apartment
* goes to who, then we can arrange by the desired range.
*/

const int MAXN = 2e5;
paii a[MAXN]; // Desired apartments
int b[MAXN];  // Offered apartments

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int n, m, k, aux;
   cin >> n >> m >> k;
   for (int i = 0; i < n; i++){
      cin >> aux;
      a[i].first = aux - k;  // lower bound
      a[i].second = aux + k; // upper bound
   }
   for (int i = 0; i < n; i++){
      cin >> b[i];
   }

   sort(a, a+n); // pair sort is lexicographically
   sort(b, b+m);

   int i, j, count; i = j = count = 0;
   while (i < n && j < m){
      if (b[j] < a[i].first) j++; // the apartment is too small
      else if (b[j] > a[i].second) i++; // the apartment is too big
      else{
         count++; i++; j++; // we got a match!
      }
   }

   cout << count << end;

   return 0;
}
