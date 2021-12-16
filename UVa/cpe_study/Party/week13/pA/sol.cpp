#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

signed main(){
    string s;
    int ct=1;
    while (getline(cin, s)){
        for (auto e:s) {
            if (e == '\"') {
                cout<<(ct&1?"``":"''");
                ct++; ct%2;
                continue;
            }
            cout<<e;
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}