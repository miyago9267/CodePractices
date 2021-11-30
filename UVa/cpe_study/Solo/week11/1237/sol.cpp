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

vector<tuple<string, int, int>> priRange;

signed main(){
    IO;
    freopen("p.in", "r", stdin);
    freopen("p.out", "w", stdout);
    int T, D, Q; cin>>T;
    while (T--){
        priRange.clear();
        string fac; int maxp, minp;
        cin>>D;
        while (D--){
            cin>>fac>>minp>>maxp;
            priRange.push_back(make_tuple(fac, minp, maxp));
        }
        cin>>Q;
        while (Q--){
            int q, cnt = 0; string tmp;
            cin>>q;
            for (auto e:priRange) {
                if (get<1>(e)<=q && q<=get<2>(e)) {
                    cnt++;
                    tmp = get<0>(e);
                }
                if (cnt > 1) 
                    break;
            }
            if (cnt == 1) 
                cout<<tmp<<endl;
            else 
                cout<<"UNDETERMINED"<<endl;
        }
        if(T)
            cout<<endl;
    }
    return EXIT_SUCCESS;
}
