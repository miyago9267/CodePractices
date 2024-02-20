#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

using namespace std;

signed main() {
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    int n;
    while (cin>>n && n){
        cout<<setw(3)<<n<<"! =";
        map<int, int> mp;

		for(int i=2; i<=n; i++) {
			int cp = i;
			for(int j = 2; j <= cp; j++) while(!(cp % j))
				mp[j]++, cp /= j;
		}
		int cnt = 15, sz = mp.size();
		for(auto i : mp) {
			cout << setw(3) << i.second;
			cnt--, sz--; 
			if(!cnt && sz) cout<<endl<<"      ", cnt = 15;
		}
		cout << endl;
    }
    return EXIT_SUCCESS;
}