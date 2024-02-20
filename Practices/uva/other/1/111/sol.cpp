#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define endll "\n\n"
#define ll long long
#define pb push_back

using namespace std;

map<int, int> ans;

signed main() {
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    int n, realMp, idk; cin>>n;
    vector<int> buf(n);
    for (auto i=0; i<n;i++){
        cin>>realMp;
        ans[i] = realMp-1;
    }
    while (cin>>idk) {
        buf[ans[0]] = idk;
        for (auto i=1; i<n;i++) {
            cin>>idk;
            buf[ans[i]] = idk;
        }
        vector<int> lis;
        lis.pb(buf[0]);
        for (auto i=0; i<n;i++) {
            if (buf[i] > lis.back()) lis.pb(buf[i]);
            else *lower_bound(lis.begin(), lis.end(), buf[i]) = buf[i];
        }
        cout<<lis.size()<<endl;
    }
    
    return EXIT_SUCCESS;
}