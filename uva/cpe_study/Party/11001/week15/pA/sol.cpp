#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

signed main(){
    IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    set<int> sums;
    vector<int> b;
    int n, ct=1, B2;
    while (cin>>n){
        int maxn = -1;
        sums.clear(); b.clear(); B2=1;
        cout<<"Case #"<<ct++<<": ";
        for (auto t=0; t<n; t++){
            int x; cin>>x;
            b.push_back(x);
            if (x<1) B2=0; 
            if (maxn<=x) maxn=x;
            else B2=0;
        }
        for (auto i=0;i<n;i++){
            for (auto j=i;j<n;j++){
                int sum = b[i]+b[j];
                if (sums.count(sum)) {
                    B2=0;
                    break;
                } 
                else {
                    sums.insert(sum);
                }
            }
        }
        cout<<"It is "<<(B2?"":"not ")<<"a B2-Sequence."<<endl<<endl;
    }
    return EXIT_SUCCESS;
}
