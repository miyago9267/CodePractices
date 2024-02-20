#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

vector<int> check;

void renew(int len) {
    check.clear();
    check.resize(len);
    for (auto e=0;e<len;e++) check[e] = 0;
}

signed main(){
    IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    int n, r, notAll;
    while (cin>>n>>r) {
        renew(n+1);
        for (int i=0;i<r;i++) {
            int tmp; cin>>tmp;
            check[tmp] = 1;
        }
        for (int j=1; j<n+1; j++) {
            if (!check[j]) {
                cout<<j<<' ';
            }
        }
        cout<<(n==r?"*":"");
        cout<<endl;
    }
    return 0;
}
