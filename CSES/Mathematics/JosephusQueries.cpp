
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Josephus Queries - CSES 
/*
* La idea es generar nuevos círculos con la mitad de circunferencia que los 
* pasados. Entonces, si la eliminación deseada no queda dentro de las 
* eliminaciones del círculo actual, entonces se tiene que generar uno nuevo con
* circunferencia floor(n/2) y se debe de actualizar la cantidad de eliminaciones
* a considerar que ya se eliminaron ceil(n/2) de los niños. 
*
* Una vez se encuentra el círculo donde se tiene que hacer la eliminación, esta
* se obtiene de manera directa con el módulo del círculo, y el paso delicado es
* retornar los índices antes de la transformación al nuevo círculo. 
*/

ll f(ll n,ll k)
{
    if(n==1) return 1;
    if(k<=(n+1)/2) 
    {
        if(2*k>n) return (2*k)%n;
        else return 2*k;
    }
    ll temp=f(n/2,k-(n+1)/2);
    if(n%2==1) return 2*temp+1;
    return 2*temp-1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        ll n,k;
        cin>>n>>k;
        cout<<f(n,k)<<"\n";
    }
}
