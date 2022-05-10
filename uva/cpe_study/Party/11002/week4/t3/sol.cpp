// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#pragma GCC optimize("O1")
#pragma GCC optimize("O2")
#pragma GCC optimize("O3")
#define endl "\n"
#define endll "\n\n"
#define pb emplace_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.sync_with_stdio(0)
#define ll long long
#define MAXN maxn
#define MODN modn

using namespace std;

string mp = " `1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
string s;
string h(256, ' ');

void init(){
    for(auto i=2;i<mp.size(); ++i ){
        h[mp[i]] = mp[i-1];
    }
}

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    
    init();
    while (getline(cin, s)) {
        for (auto c:s) cout <<h[c];
        cout<<endl;
    }
    return EXIT_SUCCESS;
}
