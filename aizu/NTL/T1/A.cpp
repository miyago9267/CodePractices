// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN 10e9
#define MOD modn
#define ll long long

using namespace std;

signed main(){
    //IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    int n, tmp; cin>>n;
    tmp = n;
    cout<<n<<":";
    for (int i=2;i*i<=n;i++){
        while (!(tmp%i)){
            cout<<" "<<i;
            tmp/=i;
        }
        if (tmp==1) break;
    }
    if (tmp!=1) cout<<" "<<tmp;
    cout<<endl;
    return EXIT_SUCCESS;
}