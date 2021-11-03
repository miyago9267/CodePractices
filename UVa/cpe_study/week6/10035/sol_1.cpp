#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

signed main(){
    long long a, b;
    while (cin>>a>>b) {
        if (a==0 && b==0) break;
        int mx = 0, c = 0;
        if (a<b) swap(a, b);
        while (a){
            if (a%10+b%10+c >= 10) {
                mx++;
                c=1;
            }
            else c=0;
            a/=10;b/=10;
        }
        if (!mx) cout<<"No carry operation."<<endl;
        else if (mx==1) cout<<"1 carry operation."<<endl;
        else cout<<mx<<" carry operations."<<endl;
    }
    return 0;
}
