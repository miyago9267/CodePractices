#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

signed main(){
    IO;
    int n, m; 
    while (cin>>n>>m, n || m) {
        cout<<ceil(sqrt(m))-floor(sqrt(n))+(pow(sqrt(m),2)==m?1:0)+((pow(sqrt(n),2)==n?-1:0))<<endl;
    }
    return 0;
}
