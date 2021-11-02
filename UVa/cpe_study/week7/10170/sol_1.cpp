#include <bits/stdc++.h>
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define MAXN maxn

using namespace std;

signed main() {
	long long s,d;
	while(cin>>s>>d) {
		while(d>0) {
			d -= s;
			s++;
		}
		cout<<s-1<<endl;
	}
	return 0;
}