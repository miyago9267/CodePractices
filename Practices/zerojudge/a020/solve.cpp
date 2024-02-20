#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

signed main() {
    IO;
    int idnum[26] = {
        10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21,
        22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33
    };
    string s;
    while(cin >> s) {
        //cout<<s<<endl;
        int sum = idnum[s[0]-'A']/10 + idnum[s[0]-'A']%10*9;;
        for (int i=0; i<9; i++)
            sum += (s[i+1]-'0')*(8-i);
        sum += s[9]-'0';
        cout << ((sum%10) ? "fake" : "real" ) << endl;
    }
    return 0;
}