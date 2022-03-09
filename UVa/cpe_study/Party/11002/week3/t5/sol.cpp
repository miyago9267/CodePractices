#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define MAXN maxn
#define INF 0x3f3f3f3f
#define MODN modn
#define pii pair<int,int>

using namespace std;

vector<pii> tur;
vector<int> dp(5610, INF);

bool comp(pii a,pii b){
    if (a.second == b.second)
        return a.first<b.first;
    return a.second<b.second;
}

signed main(){
    IO;
    #ifdef DEBUG
        freopen("p.in","r",stdin);
        freopen("p.out","w",stdout);
    #endif
    int n, m, maxt=0;
    while (cin>>n>>m) {
        tur.pb({n, m-n});
    }
    sort(tur.begin(), tur.end(), comp);
    dp[0] = 0;
    for (auto i=0;i<tur.size();i++){
        for (auto j=i;j>-1;j--){
            if (dp[j-1]<=tur[i].second)
                dp[j] = min(dp[j], tur[i].first+dp[j-1]);
        }
    }
    for (auto i=0;i<dp.size();maxt=i++){
        if (dp[i]==INF)
            break;
    }
    cout<<maxt<<endl;

    return EXIT_SUCCESS;
}