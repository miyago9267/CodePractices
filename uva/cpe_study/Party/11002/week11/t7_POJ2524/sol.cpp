#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios::sync_with_stdio(0);cin.tie(0)
#define MAXN 50005

using namespace std;

vector<int> disSet(MAXN);

int find(int x){
    if (x == disSet[x] ) return x;
    return disSet[x] = find(disSet[x]);
}

void un(int x, int y){
    x = find(x), y = find(y);
    if (x!=y) disSet[x] = y;
}

signed main(){
    IO;
    #ifdef DEBUG
        freopen("p.in", "r", stdin);
        freopen("p.out", "w", stdout);
    #endif

    int n, m, T=1;
    while (cin>>n>>m && (n+m)) {
        for (auto i=0;i<n;i++) disSet[i] = i;
        int x, y, ct=0;
        while (m--) {
            cin>>x>>y;
            un(x, y);
        }
        for (auto i=0;i<n;i++) if (find(i)==i) ct++;
        cout<<"Case "<<T++<<": "<<ct<<endl;
    }
    return EXIT_SUCCESS;
}