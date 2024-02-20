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

signed main(){
    IO;
    vector<int> addr;
    int T, r, sum, med; cin>>T;
    while (T--) {
        cin>>r;
        sum = 0; addr.clear();
        for (auto i=0; i<r; i++) {
            int e; cin>>e;
            addr.push_back(e);
        }
        sort(addr.begin(), addr.end());
        med = (r%2==1?addr[r/2]:(addr[r/2-1] + addr[r/2])/2);
        for (auto v:addr) sum += abs(v-med);
        cout<<sum<<endl;
    }
    return EXIT_SUCCESS;
}
