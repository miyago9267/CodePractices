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
#define tt cout << "test" << endl
#define fe(v) for(auto x : v) cout << x << " "; cout << endl
#define pii pair<ll, ll>
#define vi vector<ll>
#define vvi vector<vi>
#define cmp greater<ll>
#define all(v) v.begin(), v.end()

#define rootPath NEED_SETTING
#define di (rootPath+"/Debug/t.in")
#define do (rootPath+"/Debug/t.out")

using namespace std;

// ---------------------------------------------------------------- //

class Solution {
    public:
        Solution() {}
        ~Solution() {}
        static void solve();
    private:
};

signed main() {
    IO;
    #ifdef DEBUG
        cin.tie(0);cout.sync_with_stdio(0);
        freopen(di.c_str(), "r", stdin);
        freopen(do.c_str(), "w", stdout);
    #endif

    Solution::solve();

    return EXIT_SUCCESS;
}