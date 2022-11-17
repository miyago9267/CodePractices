// By myg9267
// i m suck at coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.sync_with_stdio(0)
#define ll long long
#define inf 0x3f3f3f3f
#define MAXN maxn
#define MODN modn
#define DD(a, b) cout << a << " = " << b << endl

using namespace std;

ll n, t, res;
ll a[41];
map<ll, ll> mp;

void sol(ll cnt, ll hd, ll tl, ll pile) {
    if (hd >= tl) {
        if (!pile) mp[cnt]++;
        else res+=mp[t-cnt];
        return;
    }
    sol(cnt + a[hd], hd+1, tl, pile);
    sol(cnt, hd+1, tl, pile);
}

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
 
    while (cin>>n>>t){
        res = 0; mp.clear();
        for (auto i=0; i<n; i++)
            cin>>a[i];
        sol(0, 0, n/2, 0);
        sol(0, n/2, n, 1);
        cout<<res+(t?0:-1)<<endl;
    }

    return EXIT_SUCCESS;
}
