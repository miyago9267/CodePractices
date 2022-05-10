#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN 105
#define MOD modn
#define ll long long

using namespace std;

char mine[105][105];

int check(int x, int y, int h, int w){
    int dx0 = (x==0?x:x-1), dx1 = (x==h-1?x:x+1),
     dy0 = (y==0?y:y-1), dy1 = (y==w-1?y:y+1), ct=0;
    for (auto e=dx0; e<=dx1; e++) {
         for (auto v=dy0; v<=dy1; v++) {
             if (mine[e][v] == '*') ct++;
        }
    }
    return ct;
}

signed main(){
    //IO;
    // freopen("p.in", "r", stdin);
    // freopen("p.out", "w", stdout);
    int n, m, time=0;
    while (cin>>n>>m && n || m) {
        string line;
        for (auto i=0; i<n; i++) {
            cin>>line;
            for (auto j=0;j<m;j++){
                mine[i][j] = line[j];
            }
        }
        if (time++) cout<<endl;
        cout<<"Field #"<<time<<":"<<endl;
        for (auto i=0; i<n; i++) {
            for (auto j=0;j<m;j++){
                if (mine[i][j] == '*') cout<<'*';
                else if (mine[i][j] == '.') cout<<check(i, j, n, m);
            }
            cout<<endl;
        }
    }
    return EXIT_SUCCESS;
}