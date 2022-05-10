#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios::sync_with_stdio(0);cin.tie(0)
#define MAXN 50005

using namespace std;

signed main(){
    IO;
    #ifdef DEBUG
        freopen("p.in", "r", stdin);
        freopen("p.out", "w", stdout);
    #endif
    
    int n;
    while (cin>>n && n) { 
        int  res = 0;
        while (n--) {
            int tmp; cin>>tmp;
            res^=tmp;
        }
        cout<<(res?"Yes":"No")<<endl;
    }
    return EXIT_SUCCESS;
}