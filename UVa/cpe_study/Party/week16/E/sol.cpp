#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long
#define pii pair<string, int>

using namespace std;

signed main(){
    IO;
    // freopen("p.in", "r", stdin);
    // freopen("p.out", "w", stdout);
    int n, ks, ts, min, gcd, ct, nowTime; cin>>n;
    string med;
    while (n--){
        ct = 0, nowTime = 0;
        cin>>ks>>ts;
        vector<pair<int, string>> vec;
        for (auto i=0;i<ks;i++) {
            cin>>med>>min;
            vec.push_back(make_pair(min, med));
        }
        for (auto t=1;ct<ts;t++){
            for (auto e:vec){
                if (ct>=ts) break;
                else if (!(t%e.first)){
                    ct++;
                    cout<<t<<' '<<e.second<<endl;
                }
            }
        }
    }
    return EXIT_SUCCESS;
}
