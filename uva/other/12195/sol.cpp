#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0)
#define ll long long
#define inf 0x3f3f3f3f
#define MAXN maxn
#define MODN modn

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

    string mp = "XTSEQHW";
    regex reg("([EHQSTWX]+)/");
    string s;

    while (cin >> s && s != "*") {
        int res = 0;
        for (auto it = sregex_iterator(s.begin(), s.end(), reg); it!=sregex_iterator(); it++) {
            int cnt = 0;
            for (auto c: (*it)[1].str()) cnt += 1 << (mp.find(c));
            res += cnt==64;
        }
        cout << res << endl;
    }

    return EXIT_SUCCESS;
}