#include <bits/stdc++.h>
#define ll long long
#define vvll vector<vector<ll>>

using namespace std;

ll MOD, n, m;

vvll operator*(vvll a, vvll b){
    vvll ans(2, vector<ll> (2, 0));
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            for (int k=0;k<2;k++) 
                ans[i][j] = (ans[i][j] + a[i][k]*b[k][j])&MOD;
    return ans;
}
signed main(){
    ios_base::sync_with_stdio;cin.tie(0);
    while (cin>>n>>m){
        vvll res = {{0,1},{1,1}}, mat = res;
        MOD = (1<<m)-1;
        while (n){
            if (n&1) res = res*mat;
            mat = mat*mat;
            n>>=1;
        }
        cout<<res[0][0]<<endl;
    }
}