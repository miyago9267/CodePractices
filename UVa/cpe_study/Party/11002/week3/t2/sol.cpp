#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb emplace_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define MAXN maxn
#define MODN modn

using namespace std;

signed main(){
    IO;
    #ifdef DEBUG
        freopen("p.in","r",stdin);
        freopen("p.out","w",stdout);
    #endif
    vector<ll> sky;
    vector<ll> ht(10005, 0);
    int b, e, h;
    while (cin>>b>>h>>e){
        for (auto i=b; i<e; i++) if (ht[i]<h) ht[i] = h;
    }
    ll tmp = 0;
    for (auto i=0; i<ht.size(); i++) {
        if (ht[i]!=tmp) {
            sky.pb(i);
            sky.pb(ht[i]);
            tmp = ht[i];
        }
    }
    for (auto e=0;e<sky.size();e++) {
        cout<<(e?" ":"")<<sky[e];
    }
    cout<<endl;
    return EXIT_SUCCESS;
}