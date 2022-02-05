#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

class Solution {
public:
    static vector<int> coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX);
        dp[0]=0;
        for (auto e:coins){
            for (auto i=e; i<=amount; i++){
                dp[i] = min(dp[i], 1 + dp[i-e]);
            }
        }
        return dp;
    }  
};


signed main(){
    IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    Solution sol;
    vector<int> c = {1, 2, 5};
    vector<int> d = sol.coinChange(c, 11);
    for (auto e:d) cout<<e<<' ';
    cout<<endl;
    return EXIT_SUCCESS;
}
