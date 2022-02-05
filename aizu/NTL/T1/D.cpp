// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN MAXN
#define MOD MODN
#define ll long long

using namespace std;

ll phi(ll x){
    ll res = x;
    for (int i=2;i*i<=x;i++){
        if (!(x%i)) res = res/i*(i-1);
        while (!(x%i)) x/=i;
    }
    if (x!=1) res=res/x*(x-1);
    return res;
}

signed main(){
    //IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    int n; cin>>n;
    cout<<phi(n)<<endl;
    return EXIT_SUCCESS;
}