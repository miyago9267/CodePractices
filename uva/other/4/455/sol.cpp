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

int T; string s;

signed main(){
    IO;
    #ifdef DEBUG
        cin.tie(0);cout.sync_with_stdio(0);
        string rootPath = "/public/miyago/ContestWriteUp";
        freopen((rootPath+"/Debug/t.in").c_str(), "r", stdin);
        freopen((rootPath+"/Debug/t.out").c_str(), "w", stdout);
    #endif

    cin>>T;
    while (T--) {
        cin >> s;
        for (int i=1; i<=s.size(); i++) {
            if (!(s.size()%i)) {
                bool flag = 1;
                for (int j=0; j<s.size(); j++) {
                    if (s[j] != s[j%i]) {
                        flag = 0;
                        break;
                    }
                }
                if (flag) {
                    cout << i << endl << (T?"\n":"");
                    break;
                }
            }
        }
    }

    return EXIT_SUCCESS;
}