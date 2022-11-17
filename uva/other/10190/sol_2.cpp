#include <bits/stdc++.h>
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define MAXN maxn

using namespace std;

signed main(){
	IO;
	int n, m;
	while (cin>>n>>m) {
		int t = round(log10(n)/log10(m));
		if (t>0 && n == (int)(pow(m, t))) {
			while (n != 1) cout<<n<<" ", n /= m;
			cout<<"1";
		}
		else cout<<"Boring!";
		cout<<endl;
	}
}

/*  owo owo owo owo






*/