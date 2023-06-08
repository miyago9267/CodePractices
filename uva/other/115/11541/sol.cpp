#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

signed main(){
    IO;
    // freopen("p.in", "r", stdin);
    // freopen("p.out", "w", stdout);
    string s;
    int n; cin>>n;
    for (auto t=1;t<=n;t++){
        int ct=0; char o;
        cin>>s;
        cout<<"Case "<<t<<": ";
        for (auto e:s){
            if (isalpha(e)) {
                if (ct){
                    for (auto i=0;i<ct;i++) cout<<o;
                }
                o = e;
                ct=0;
            }
            else {
                ct*=10;
                ct+=int(e-'0');
            }
        }
        if (ct){
            for (auto i=0;i<ct;i++) cout<<o;
        }
        cout<<endl;
    }
    
    return EXIT_SUCCESS;
}
