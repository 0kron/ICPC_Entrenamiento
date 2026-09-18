#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Title - Source 


struct Nodo{
   Nodo* padre;
   int sum_padre= 0;
   int sum1 = 0;
   vector<paii> hijos;
   int ind;
};

const int MAXN = 2e5 +1;
map<paii, ll> pesos;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int N; cin >> N;
   vector<vector<int>> edges(N+1);

   int u, v, a , b;
   for(int i = 0; i< N-1; i++){
      cin >> u >> v>>a>>b;
      pesos[{u,v}] = a;
      pesos[{v,u}] = b;
      edges[v].push_back(u);
      edges[u].push_back(v);
   }


   for (int i = 1; i<=N; i++){

   vector<int> padre(N+1, -1);
   vector<bool> visitados(N+1, 0);
   vector<ll> suma1(N+1, -1);

   queue<int> q; q.push(i);
   visitados[i] = 1;
   suma1[i] = 0;
   ll sumtot1 = 0;
   while (!q.empty()){
      int u = q.front(); q.pop();
      for(int v : edges[u]){
         if (!visitados[v]){
            visitados[v] = true;
            padre[v] = u;
            suma1[v] = suma1[u] + pesos[{u,v}];
            sumtot1 += suma1[v];
            q.push(v);
         }
      }
   }
   cout << sumtot1 << ' ';
   }

   cout << endl;

   return 0;
}
