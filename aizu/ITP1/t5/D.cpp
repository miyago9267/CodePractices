// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

void call(int);
signed main(){
    //IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    int n;
    while (cin>>n) {
        call(n);
    }
    return EXIT_SUCCESS;
}

void call(int n){
    int i = 0;
    while (++i <= n) {
        int x=i;
        if (!(x%3)) {
            cout<<" "<<i;
            continue;
        }
        while (x) {
            if (x%10==3) {
                cout<<" "<<i;
                break;
            }
            x/=10;
        }
    }
    cout<<endl;
}