#include <bits/stdc++.h>
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define MAXN maxn

using namespace std;

signed main(){
    long long s, d;
    while (cin>>s>>d){
        cout<<(int)ceil((sqrt(1-4*(-s*s+s-2*d))-1)/2)<<endl;
    }
}