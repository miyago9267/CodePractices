#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN 105
#define MOD modn
#define ll long long

using namespace std;


signed main(){
    IO;
    // freopen("p.in", "r", stdin);
    // freopen("p.out", "w", stdout);
    int w[4], T; cin>>T;
    while (T--){
        int isSqu = 1, squ;
        for (auto &i:w) {
            cin>>i;
            squ = i;
        }
        sort(w, w+4);
        for (auto i:w) {
            if (squ!=i) isSqu = 0;
        }
        if (isSqu) {
            cout<<"square"<<endl;
            continue;
        }
        if (w[0] == w[1] && w[2] == w[3]){
            cout<<"rectangle"<<endl;
            continue;
        }
        if (w[3]>=w[0]+w[1]+w[2]) {
            cout<<"banana"<<endl;
            continue;
        }
        cout<<"quadrangle"<<endl;
    }
    return EXIT_SUCCESS;
}