#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

signed main(){
    int n, s, d, x, y;
    cin>>n;
    while (n--){
        cin>>s>>d;
        x = (s+d)/2; y = x - d;
        if ((s+d)%2) cout<<"impossible"<<endl;
        else if (x < 0 || y < 0) cout<<"impossible"<<endl;
        else cout<<x<<' '<<y<<endl;
    }
    return 0;
}
