// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#pragma GCC optimize("O1")
#pragma GCC optimize("O2")
#pragma GCC optimize("O3")
#define endl "\n"
#define endll "\n\n"
#define pb emplace_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.sync_with_stdio(0)
#define ll long long
#define MAXN maxn
#define MODN modn

using namespace std;

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif

    int T; cin>>T;
    for (auto ct=1;ct<=T;ct++){
        cout<<"Case "<<ct<<": ";
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<((x1+y1+x2+y2+1)*(x2+y2-x1-y1)/2)+x2-x1<<endl;
    }
    return EXIT_SUCCESS;
}