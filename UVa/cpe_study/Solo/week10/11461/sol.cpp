#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

set<int> sqr;

signed main(){
    IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    int i, ct;
    for (i=1; i<1001; i++) sqr.insert(i*i);
    int n, m;
    while (cin>>n>>m, n || m) {
        ct = 0;
        for (i=n; i<=m; i++) if (sqr.count(i)) ct++;
        cout<<ct<<endl;
    }
    return 0;
}
