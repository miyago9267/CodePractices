// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

signed main(){
    IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    int w, h, x, y, r;
    cin>>w>>h>>x>>y>>r;
    cout<<((x<r||y<r||w-x<r||h-y<r)?"No":"Yes")<<endl;
    return EXIT_SUCCESS;
}