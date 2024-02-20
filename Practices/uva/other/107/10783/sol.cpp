#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

signed main(){
    ios::sync_with_stdio(0), cin.tie(0),  cout.tie(0);
    int n, a, b; cin>>n;
    for (int i=0;i<n;i++){
        cin>>a>>b;
        a += !a&1; b-= !b&1;
        cout<<"Case "<<i+1<<": "<<(a+b)*((b-a)/2+1)/2<<endl;
    }
    return 0;
}
