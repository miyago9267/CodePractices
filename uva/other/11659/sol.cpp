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
#define MAXN 25
#define MODN modn

using namespace std;

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif

    int n, a;
    vector<int> rel(MAXN);
    while (cin>>n>>a&&(n+a)){
        int ct = 0;
        rel = vector<int> (MAXN, 1);
        for (auto i=0;i<a;i++){
            int x, y;
            cin>>x>>y;
            if (y<0) if (rel[abs(y)]) ct++, rel[abs(y)] = 0;
        }
        cout<<n-ct<<endl;

    }
    return EXIT_SUCCESS;
}
