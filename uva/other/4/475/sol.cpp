#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0)
#define ll long long
#define inf 0x3f3f3f3f
#define MAXN 55
#define MODN modn

using namespace std;

string = " .xW";

class Solution{
    public:
        void solve() {
            for (int i=0; i<10; i++) {
                cin >> dna[i];
                N[0][20] = 1;
                for (int j=0; j<dna[i].size(); j++) {
                    for (int m=0; m<)
                }
            }
        }
    private:
        vector<int> dna[10];
        vector<vector<int>> N(2, vector<int>(MAXN));
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
    int T; cin>>T;
    while (T--) {
        Solution sol;
        sol.solve();
    }

    return EXIT_SUCCESS;
}