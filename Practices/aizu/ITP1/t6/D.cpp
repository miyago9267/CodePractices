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
    //IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    int n, m; cin>>n>>m;
    vector<vector<int>> a(n, vector<int> (m, 0));
    vector<int> b(m, 0);
    for (auto &e:a){
        for (auto &u:e){
            int x; cin>>x;
            u = x;
        }
    }
    for (auto &e:b){
        int x; cin>>x;
        e = x;
    }
    for (auto i=0;i<n;i++){
        int res=0;
        for (auto j=0;j<m;j++){
            res+=a[i][j]*b[j];
        }
        cout<<res<<endl;
    }
    return EXIT_SUCCESS;
}