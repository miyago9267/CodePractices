// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long
#define pii pair<ll, ll>

using namespace std;

ll gcd(ll a, ll b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

pii extendEuclidean(ll p, ll q){
    if(q==0) 
		return make_pair(1,0);
    pair<ll, ll> pr = extendEuclidean(q, p%q);
    ll fir = pr.first, sec = pr.second;
    return make_pair(sec, fir - p/q*sec);
}

signed main(){
	//IO;
	//freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    ll n, m;
    cin>>n>>m;
    pii res = extendEuclidean(n, m); 
    cout<<res.first<<' '<<res.second<<endl;
}