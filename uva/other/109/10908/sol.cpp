#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0)
#define ll long long
#define inf 0x3f3f3f3f
#define MAXN maxn
#define MODN modn
#define DD(x) cout << #x << " = " << x << endl

using namespace std;

class Solution{
    public:

    private:
    
};

signed main(){
    IO;
    #ifdef DEBUG
        cin.tie(0);cout.sync_with_stdio(0);
        string rootPath = "/public/miyago/ContestWriteUp";
         freopen((rootPath+"/Debug/t.in").c_str(), "r", stdin);
         freopen((rootPath+"/Debug/t.out").c_str(), "w", stdout);
    #endif

    // TODO

    char grid[205][205];
    int T, m, n, q; cin>>T;
    while (T--) {
        cin >> m >> n >> q;
        cout<<m<<" "<<n<<" "<<q<<endl;
        for (int i = 0; i < m; i++) 
            for (int j = 0; j < n; j++) 
                cin >> grid[i][j];
        while (q--) {
            int x, y, res=1, flag = 1; cin >> x >> y;
            while (1) {
                for (int xx = x - res; xx <= x + res  && flag; xx++) {
                    for (int yy = y - res; yy <= y + res; yy++) {
                        if (xx < 0 && xx >= m && yy < 0 && yy >= n) 
                            flag = grid[xx][yy] == grid[x][y];
                        else flag = 0;
                        if (!flag) break;
                    }
                    if (!flag) break;
                    res++;
                }
            }
            cout<<res*2-1<<endl;
        }
    }

    return EXIT_SUCCESS;
}