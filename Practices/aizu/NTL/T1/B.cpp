// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN MAXN
#define MOD 1000000007
#define ll long long

using namespace std;

ll help(ll x, ll p){
    ll ans = 1;
    while (p){
        if (p&1) ans = (ans*x)%MOD;
        x = x*x%MOD;
        p/=2;
    }
    return ans;
}

signed main(){
    //IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    int n, m;
    cin>>n>>m;
    cout<<help(n, m)<<endl;
    return EXIT_SUCCESS;
}