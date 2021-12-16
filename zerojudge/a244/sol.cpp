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
    int T; cin>>T;
    while (T--) {
        ll a, b, c; cin>>a>>b>>c;
        if (a==1) cout<<b+c<<endl;
        else if (a==2) cout<<b-c<<endl;
        else if (a==3) cout<<b*c<<endl;
        else cout<<b/c<<endl;
    }
    return EXIT_SUCCESS;
}
