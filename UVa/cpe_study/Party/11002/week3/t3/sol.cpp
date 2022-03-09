#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb emplace_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define MAXN 1000005
#define MODN modn

using namespace std;

signed main(){
    IO;
    #ifdef DEBUG
        freopen("p.in","r",stdin);
        freopen("p.out","w",stdout);
    #endif
    ll x;
    string s; 
    while (cin>>x){
        getline(cin, s);
        ll res=0, tmp, ct=1;
        vector<ll> a;
        getline(cin, s);
        stringstream ss(s);
        while (ss>>tmp) a.pb(tmp);
        for (int i=a.size()-2;i>= 0;i--, ct*=x)
			res+=a[i]*ct*(a.size()-i-1);
        cout<<res<<endl;
    }
    return EXIT_SUCCESS;
}