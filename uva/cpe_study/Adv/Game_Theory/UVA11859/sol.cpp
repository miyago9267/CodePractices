#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios::sync_with_stdio(0);cin.tie(0)
#define MAXN 50005

using namespace std;

int f(int x) {
    int res = 0;
    for (int i = 2; i * i <= x; i++) {
        if (!(x%i)) {
            res++;
            x/=i;
        }
    }
    return (res==1?res:res+1);

}

signed main(){
    IO;
    #ifdef DEBUG
        freopen("p.in", "r", stdin);
        freopen("p.out", "w", stdout);
    #endif
    
    int T, n, m; cin>>T;
    for (int ct=0;ct<T;ct++) {
        int res = 0, tmp;
        cin>>n>>m;
        while (n--) {
            int r = 0;
            while (m--) cin>>tmp, r+=f(tmp);
            res^=r;
        }
        cout<<"Case #"<<ct+1<<": "<<(res?"Yes":"No")<<endl;
    }
    return EXIT_SUCCESS;
}