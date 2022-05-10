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

    char idk;
    int T, n, sym; cin>>T;
    vector<int> v(105*105);
    for (auto ct=0;ct<T;ct++){
        sym = 1;
        cin>>idk>>idk>>n;
        for (auto i=0;i<n*n;i++)
            cin>>v[i];
        for (auto i=0;i<n*n;i++){
            if (v[i]!=v[n*n-i-1]||v[i]<0) {
                sym=0; break;
            }
        }
        if (sym) cout<<"Test #"<<++ct<<": Symmestric"<<endl;
        else cout<<"Test #"<<++ct<<": Non-symmestric"<<endl;
    }
    return EXIT_SUCCESS;
}
