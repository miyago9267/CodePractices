#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios::sync_with_stdio(0);cin.tie(0)
#define pii pair<int,int>
#define MAXN 105
#define F first 
#define S second

using namespace std;

vector<pii> edges[MAXN];
vector<int> times(MAXN);
int n, e, t, m;

void idk(){
    priority_queue<pii, vector<pii>, greater<pii> > pq;
    pq.push({0, e});
    times[e]=0;

    while (!pq.empty()){
        pii cur = pq.top(); pq.pop();
        if (times[cur.S]>t) continue;
        for (int i=0;i<edges[cur.S].size();i++){
            pii next = edges[cur.S][i];
            if ((cur.F+next.S)<times[next.F]){
                times[next.F] = cur.F+next.S;
                pq.push({times[next.F], next.F});
            }
        }
    }

}

signed main(){
    IO;
    #ifdef DEBUG
        freopen("p.in", "r", stdin);
        freopen("p.out", "w", stdout);
    #endif

    int T; cin>>T;
    while (T--) {
        cin>>n>>e>>t>>m;
        for (int i=0;i<=n;i++) {
            edges[i].clear();
            times[i] = 1<<30;
        }
        while (m--) {
            int a, b, w; cin>>a>>b>>w;
            edges[b].pb({a, w});
        }
        idk();
        int ct=0;
        for (int i=1;i<=n;i++) if (times[i]<=t) ct++;
        cout<<ct<<endl;
        if (T) cout<<endl;
    }
    return EXIT_SUCCESS;
}