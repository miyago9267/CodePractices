#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

set<vector<int>> sav;

signed main(){
    int T;cin>>T;
    while (T--){
        int n, end=0;cin>>n;
        vector<int> vec, tmp, zro(n, 0);
        sav.clear();
        for (int i=0;i<n;i++) {
            int u; cin>>u; vec.push_back(u);
        }
        sav.insert(vec);
        while (1){
            tmp.clear();
            for (int j=0;j<n-1;j++) tmp.push_back(abs(vec[j+1]-vec[j]));
            tmp.push_back(abs(vec[n-1]-vec[0]));
            vec=tmp;
            if (tmp == zro) {
                end=1;break;
            }
            if (sav.count(tmp)){
                end=0;break;
            }
            sav.insert(tmp);
        }
        cout<<((end==1)?"ZERO":"LOOP")<<endl;
    }
    return 0;
}
