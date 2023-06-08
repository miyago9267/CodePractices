#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0)
#define ll long long
#define inf 0x3f3f3f3f
#define MAXN maxn
#define MODN modn

using namespace std;

ll euler(ll n){
    ll res = n;
    if (n==1)
        return 0;
    for (ll i = 2; i * i <= n; i++){
        if (!(n%i)) res -= res / i;
        while (!(n%i)) n /= i;
    }
    if (n!=1)
        res -= res / n;
    return res;
}

signed main(){
    IO;
    #ifdef DEBUG
        string rootPath = "/public/miyago/ContestWriteUp";
        freopen((rootPath + "/Debug/t.in").c_str(), "r", stdin);
        freopen((rootPath + "/Debug/t.out").c_str(), "w", stdout);
    #endif

    int n;
    while (cin>>n, n){
        cout<<euler(n)<<endl;
    }

    return EXIT_SUCCESS;
}