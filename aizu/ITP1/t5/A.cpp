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
    int h, w;
    while (cin>>h>>w, h||w) {
        string line = "";
        for (int i=0;i<w;i++) line+="#";
        for (int j=0;j<h;j++) cout<<line<<endl; 
        cout<<endl;
    }
    return EXIT_SUCCESS;
}