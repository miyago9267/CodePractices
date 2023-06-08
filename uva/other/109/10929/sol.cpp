#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

bool solve(string s) {
    int odd = 0, even = 0;
    for (int i=0; i<s.length(); i++){
        i&1?(odd+=s[i]-'0'):(even+=s[i]-'0');
    }
    return ((abs(odd-even)%11)?true:false);
}

signed main(){
    IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    string n;
    while (cin>>n, n!="0") {
        for (auto e:n) cout<<e;
        cout<<" is"<<(solve(n)?" not":"")<<" a multiple of 11."<<endl;
    }
    return 0;
}
