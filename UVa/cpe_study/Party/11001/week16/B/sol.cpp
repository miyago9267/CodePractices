#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

int f(int x){
    int res=0;
    while (x){
        res+=x%10;
        x/=10;
    }
    if (res<10) return res;
    else return f(res);
} 

signed main(){
    IO;
    // freopen("p.in", "r", stdin);
    // freopen("p.out", "w", stdout);
    int n;
    while (cin>>n && n){
        cout<<f(n)<<endl;
    }
    return EXIT_SUCCESS;
}
