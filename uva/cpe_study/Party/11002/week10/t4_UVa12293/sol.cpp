#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio;cin.tie(0)
#define ll long long
#define pb push_back
#define MAXN
#define MODN

using namespace std;

signed main(){
    //IO;
    #ifdef DEBUG
        freopen("p.in", "r", stdin);
        freopen("p.out", "w", stdout);
    #endif

    int n;
    while (cin>>n&&n) cout<<(!(n&n+1)?"Bob":"Alice")<<endl;
    
}