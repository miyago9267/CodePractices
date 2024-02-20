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

signed main(){
    //IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    int n, m,res=1;
    cin>>n;
    while (n--) cin>>m, res=res/__gcd(res,m)*m;
    cout<<res<<endl;
    return EXIT_SUCCESS;
}