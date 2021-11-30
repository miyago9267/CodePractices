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
        ll sum = 0;
        for (int i=0;i<n;i++) {
            int e; cin>>e;
            vec.push_back(e);
            sum += e;
        }
        sort(vec.begin(), vec.end());
        cout<<vec[0]<<' '<<vec[vec.size()-1]<<' '<<sum<<endl;
        
    }
    return EXIT_SUCCESS;
}