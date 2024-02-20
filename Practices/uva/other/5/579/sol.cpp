#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios::sync_with_stdio(0);cin.tie(0)

using namespace std;

signed main(){
    IO;
    #ifdef DEBUG
        freopen("p.in", "r", stdin);
        freopen("p.out", "w", stdout);
    #endif

    int h, m;
    while (scanf("%d:%d", &h, &m) != EOF&& (h+m)) {
        double res = max(h*30.0+m*0.5, m*6.0)-min(h*30.0+m*0.5, m*6.0);
        cout<<fixed<<setprecision(3)<<(res>=180?abs(res-360):abs(res))<<endl;
    }
    return EXIT_SUCCESS;
}