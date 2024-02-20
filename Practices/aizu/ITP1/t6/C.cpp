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
    //IO;
    freopen("p.in", "r", stdin);
    freopen("p.out", "w", stdout);
    int n, b, f, r, v, bct=0;
    vector<int> room(125, 0);
    cin>>n;
    while (n--){
        cin>>b>>f>>r>>v;
        room[30*(b-1)+10*(f-1)+r-1]+=v;
    }
    for (auto e=0;e<120;e++){
        cout<<' '<<room[e]<<(!((e+1)%10)?"\n":"");
        if (bct<3 && !((e+1)%30)) {
            cout<<string(20, '#')<<endl;
            bct++;
        }
    }
    return EXIT_SUCCESS;
}