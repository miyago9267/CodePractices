// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#pragma GCC optimize("O1")
#pragma GCC optimize("O2")
#pragma GCC optimize("O3")
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.sync_with_stdio(0)
#define ll long long
#define MAXN maxn
#define MODN modn
#define pci pair<char, int>

using namespace std;

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    map<char, int> ct;
    vector<pci> tmp;
    string s; int n; cin>>n; getline(cin, s);
    while (n--){
        getline(cin, s);
        for (auto c:s){
            if (isalpha(c)) ct[(c>96&&c<127?c^32:c)]++;
        }
    }
    for (auto i:ct) tmp.pb(i);
    sort(tmp.begin(), tmp.end(), [](pci &a, pci &b){
        if (a.second == b.second) return a.first<b.first;
        return a.second>b.second;
    });
    for (auto i:tmp) cout<<i.first<<" "<<i.second<<endl;
    return EXIT_SUCCESS;
}
