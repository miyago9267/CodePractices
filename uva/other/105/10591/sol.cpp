#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll unsigned long long

using namespace std;

set<int> hap;

bool solve(int a) {
    if (a == 1) return 1;
    int sum = 0, tmp = a;
    while (tmp){
        sum+=(tmp%10)*(tmp%10);
        tmp/=10;
    }
    if (hap.count(sum)) return 0;
    else hap.insert(sum);
    return solve(sum);
}

signed main(){
	IO;
	// freopen("p.in", "r", stdin);
    // freopen("p.out", "w", stdout);
    int T, n, ct=1; cin>>T;
    while (T--) {
        
        hap.clear();
        cin>>n;
        cout<<"Case #"<<ct++<<": "<<n<<" is ";
        cout<<(solve(n)?"a Happy":"an Unhappy")<<" number."<<endl;
    }
    return EXIT_SUCCESS;
}
