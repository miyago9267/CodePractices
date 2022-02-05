#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long
#define pii pair<string, int>

using namespace std;

signed main(){
    IO;
    // freopen("p.in", "r", stdin);
    // freopen("p.out", "w", stdout);
    int T, d, p ,days, owo; cin>>T;
    while (T--){
        cin>>d>>p;
        vector<int> ct(d, 0);
        owo=0;
        for (auto i=0;i<p;i++){
            cin>>days;
            for (auto t=days-1;t<=d;t+=days){
                if (!(t%7==6) && !(t%7==5)) ct[t]++;
            }
        }
        for (auto e:ct) if (e) owo++;
        cout<<owo<<endl;
    }
    return EXIT_SUCCESS;
}
