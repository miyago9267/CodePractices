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

vector<ll> fib = {1, 2};

void geneFibNum() {
    for (auto x=0; x<50; x++){
        fib.push_back((fib[x]+fib[x+1]));
    }
}

signed main(){
    IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    geneFibNum();
    ll n, inp; cin>>n;
    while (n--) {
        int nonZero = 0;
        cin>>inp;
        cout<<inp<<" = ";
        for (auto i=49; i>-1; i--) {
            if (inp-fib[i] >= 0) {
                cout<<"1";
                inp-=fib[i];
                nonZero=1;
            }
            else if (nonZero) cout<<"0";
        }
        cout<<" (fib)"<<endl;
    }
    return EXIT_SUCCESS;
}
