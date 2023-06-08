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

string key = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";

signed main(){
    IO;
    //freopen("p.in", "r", stdin);
    freopen("p.out", "w", stdout);
    string s; 
    getline(cin, s);
    for (auto i:s) {
        if(i>='A'&&i<='Z') i += 32;
        if (i == ' ') {
            cout<<' '; continue;
        }
        cout<<key[key.find(i)-2];
    }
    cout<<endl;
    return EXIT_SUCCESS;
}
