#include <bits/stdc++.h>
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define MAXN maxn
#define ll long long

using namespace std;

signed main() {
	ll s, d, i, sum;
	while (cin>>s>>d){
		for (i=s, sum=0; sum<d;) sum+=i++;
		cout<<i-1<<endl;
	}
	return 0;
}