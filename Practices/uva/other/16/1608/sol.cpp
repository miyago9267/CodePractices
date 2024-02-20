#include <bits/stdc++.h>
#pragma GCC optimize("Ofast, unroll-loops, no-stack-protector, fast-math, O3")
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0); \
        cin.tie(0);cout.sync_with_stdio(0);
#define F first
#define S second
#define ll long long
#define inf 0x3f3f3f3f
#define MAXN maxn
#define MODN modn

using namespace std;

string status[2] = {"boring", "non-boring"};

class Solution{
    public:
        int fnd(int l, int r) {
            if (l>=r) return 1;
            for (int i=l; i<=r; ++i) {
                if (idx[i].F<l && idx[i].S>r) {
                    return fnd(l, i-1) && fnd(i+1, r);
                }
            }
            return 0;
        }

        void input() {
            cin >> n;
            for (ll i=1; i<=n; ++i) {
                cin>>tmp, vt.pb(tmp), idx.pb({0, n+1}), mp[i]=0;
            }
            for (ll i=1; i<=n; ++i) {
                idx[i].F=mp[vt[i]], idx[idx[i].F].S=i, mp[vt[i]]=i;
            }
        }

        string Sol() {
            input();
            return status[fnd(1, n)];
        }
    private:
        ll n, tmp;
        unordered_map<ll, int> mp;
        vector<ll> vt = {0};
        vector<pair<int, int>> idx = {{0, 0}};
};

signed main(){
    IO;
    #ifdef DEBUG
        cin.tie(0);cout.sync_with_stdio(0);
        string rootPath = "/public/miyago/ContestWriteUp";
        freopen((rootPath+"/Debug/t.in").c_str(), "r", stdin);
        freopen((rootPath+"/Debug/t.out").c_str(), "w", stdout);
    #endif

    int case_cnt; cin >> case_cnt;

    while(case_cnt--) {
        Solution sol;
        cout << sol.Sol() << endl;
        // sol.Sol();
    }

    return EXIT_SUCCESS;
}

