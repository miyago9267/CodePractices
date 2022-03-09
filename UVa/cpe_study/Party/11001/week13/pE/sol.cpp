#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long
#define pii pair<int, int>

using namespace std;

ll f(int x){
	ll p1=1, p2=7, p3;
	x=(x+1)/2-1;
	while(x>1){
		p3=2*p2-p1+4;
		p1=p2;
		p2=p3;
		x--;
	}
	return p3;
}
	
signed main(){
	int  x;
	while(cin>>x){
		if(x==1){
			cout<<"1"<<endl;
			continue;
		}
		else if(x==3){
			cout<<"15"<<endl;
			continue;
		}
		cout<<f(x)*3-6<<endl;
	}
        return 0;
}