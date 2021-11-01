#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

signed main(){
    int k, n, m, x, y;
    while (cin>>k && k !=0){
        cin>>n>>m;
        while (k--){
            cin>>x>>y;
            if (x == n || y == m){
                cout<<"divisa"<<endl;
                continue;
            }
            char posy = y > m?'N':'S'; char posx = x > n?'E':'O';
            cout<<posy<<posx<<endl;
        }
    }
    return 0;
}
