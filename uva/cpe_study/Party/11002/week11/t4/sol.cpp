#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios::sync_with_stdio(0);cin.tie(0)
#define ll long long

using namespace std;

signed main(){
    IO;
    #ifdef DEBUG
        freopen("p.in", "r", stdin);
        freopen("p.out", "w", stdout);
    #endif

    ll T, n, m; cin>>T;
    while(T--){
        cin>>n;
        ll res = 0;
        while (n--) {
            cin>>m;
            while (m&1) m>>=1;
            res ^= m;
        } 
        cout<<(res?"YES":"NO")<<endl;
    }
    return EXIT_SUCCESS;
}