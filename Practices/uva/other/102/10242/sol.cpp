#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio;cin.tie(0)
#define ll long long
#define pb push_back
#define MAXN
#define MODN

using namespace std;

signed main(){
    //IO;
    #ifdef DEBUG
        freopen("p.in", "r", stdin);
        freopen("p.out", "w", stdout);
    #endif

    double x[4], y[4], ax, ay;
    while (cin>>x[0]>>y[0]){
        ax = x[0]; ay = y[0];
        for (int i=1; i<4; i++){
            cin>>x[i]>>y[i];
            ax += x[i]; ay += y[i];
        }
        for (int i=0; i<4; i++){
            for (int j=i+1; j<4; j++){
                if (x[i]==x[j] && y[i]==y[j]){
                    ax-=x[i]*3; ay-=y[i]*3;
                    cout<<fixed<<setprecision(3)<<ax<<" "<<ay<<endl;
                }
            }
        }

    }
    
}