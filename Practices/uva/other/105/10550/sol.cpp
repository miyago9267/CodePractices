#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

signed main(){
    //freopen("p.in","r",stdin);
    //freopen("p.out","w",stdout);
    int t[4];
    while (cin>>t[0]>>t[1]>>t[2]>>t[3], t[0] || t[1] || t[2] || t[3]){
        int sum=1080;
        sum += ((t[0]<=t[1]?40:0) + (t[0]-t[1]))*9;
        sum += ((t[1]>=t[2]?40:0) + (t[2]-t[1]))*9;
        sum += ((t[2]<=t[3]?40:0) + (t[2]-t[3]))*9;
        cout<<sum<<endl;
    }
    return EXIT_SUCCESS;
}