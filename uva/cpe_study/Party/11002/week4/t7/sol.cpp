// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.sync_with_stdio(0)
#define ll long long

using namespace std;

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    
    int n; string s;
    while (cin>>n) {
        cin.get();
        getline(cin, s);
        map<string, int> mp;
        for (int i=0;i<=s.size()-n;i++) {
            string tmp = s.substr(i, n);
            mp[tmp]++;
        }
        int maxn = -1; string tmpstr;
        for (auto i:mp) {
            if (i.second>maxn) {
                maxn = i.second; tmpstr = i.first;
            }
        }
        cout<<tmpstr<<endl;
    }

    return EXIT_SUCCESS;
}
