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

void check(int a, int b) {
    set<int> num; int t_a = a, t_b = b; 
    while (a) {
        if (num.count(a%10)) return false;
        num.insert(a%10);
        a/=10;
    } 
    while (b) {
        if (num.count(b%10)) return false;
        num.insert(b%10);
        b/=10;
    }
    return true;
}

signed main(){
    IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    int n, t=0;
    bool hasDiv;
    while (cin>>n) {
        if (t++) cout<<endl;
        hasDiv=false;
        for (auto i=0;i<99999;i++){
            if (!(i%n)){
                if (check(i, i/n)){
                    hasDiv=true;
                    cout<<i<<" / "<<i/n<<" = "<<n<<endl;
                }
            }
        }
    }
    return EXIT_SUCCESS;
}
