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

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    int T, n, m; cin>>T;
    for (auto ct=0;ct<T;ct++){
        int high=0, low=0, tmp;
        cin>>n>>tmp;
        while (--n){
            cin>>m;
            if (m>tmp) high++;
            else if (m<tmp) low++;
            tmp = m;
        }
        cout<<"Case "<<ct+1<<": "<<high<<" "<<low<<endl;
    }

    return EXIT_SUCCESS;
}
