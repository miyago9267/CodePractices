#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios::sync_with_stdio(0);cin.tie(0)
#define ll long long 
#define vll vector<ll>

using namespace std;

signed main(){
    //IO;
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    ll n;
    while(cin>>n&&n){
        ll res=0; vll v(n);
        for(ll i=0;i<n;i++) { 
            cin>>v[i];
            if (i) res+=abs(v[i-1]),v[i]+=v[i-1];
        }
        cout<<res<<endl;
    }
    return EXIT_SUCCESS;
}