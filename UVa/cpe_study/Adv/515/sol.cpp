// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

vector<int> ed(105, 0);
vector<vector<int>> p(105, vector<int> (105, 0));
vector<vector<int>> dp(1005, vector<int> (105, 0));

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    int c, s, e, t, n;
    while (cin>>c>>s>>e>>t && c+s+e+t){
        for (auto i=0;i<=c;i++) {
            for (auto j=0;j<=c;j++) cin>>p[i][j];
            ed[i] = 0;
        }
        for (auto i=0;i<=e;i++) cin>>n, ed[n]=1;
        for (auto i=0;i<=t;i++) for (auto j=0;j<c;j++) dp[i][j] = INT_MIN;
        dp[0][s] = 0;
        for (auto i=0;i<=t;i++){
            for (auto j=0;j<=c;j++){
                for (auto k=1;k<=c;k++){
                    if (dp[i][j]<dp[i-1][k]+p[k][j]&&p[k][j]) dp[i][j]=p[i-1][k]+p[k][j]&&p[k][j];
                }
            }
        }
        int ans = 0;
        for (auto i=1;i<=c;i++) {
            if (ans < dp[t][i]) ans = dp[t][i];
        }
        cout<<ans<<endl;
    }
    return EXIT_SUCCESS;
}
