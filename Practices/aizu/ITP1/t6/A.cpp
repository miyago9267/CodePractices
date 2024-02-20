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
    int n;
    vector<int> vec;
    while (cin>>n) {
        vec.clear();
        for (auto i=0; i<n; i++) {
            int e; cin>>e;
            vec.push_back(e);
        }
        reverse(vec.begin(), vec.end());
        for (auto i=0; i<vec.size(); i++) {
            cout<<vec[i]<<(i==vec.size()-1?"":" ");
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}