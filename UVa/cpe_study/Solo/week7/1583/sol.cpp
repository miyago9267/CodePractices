#include <bits/stdc++.h>
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define MAXN maxn

using namespace std;

int getDig(int a){
    int res = a;
    while (a){
        res+=a%10;
        a/=10;
    }
    return res;
}

signed main(){
    int T, n;
    cin>>T;
    while (T--){
        cin>>n;
        int hasDig = 0, minn;
        for (int i=n-50;i<n;i++){
            if (getDig(i)==n) {
                cout<<i<<endl;
                hasDig = 1;
                break;
            }
        }
        if (!hasDig) cout<<0<<endl;
    }
	return 0;
}