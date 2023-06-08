#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll unsigned long long

using namespace std;

string solve(int a) {
    string res = "";
    if (a == 1) return "1";
    for (int i=9; i>1; i--) {
        while (!(a%i)) {
            res = char(i+48) + res; 
            a /= i;
        }
    }
    return (a!=1?"-1":res);
}

signed main(){
	IO;
	//freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    int T, n; cin>>T;
    while (T--) {
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return EXIT_SUCCESS;
}
