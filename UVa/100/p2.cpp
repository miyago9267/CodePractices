#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//#define MAXN maxn
#define MOD modn

using namespace std;

int len(int n){
    int l = 1;
    while (n!=1){
        if (n%2) n=3*n+1;
        else n/=2;
        l++;
    }
    return l;
}
int m(int a, int b){
    int maxCt=0;
    for (int i=a;i<=b;i++){
        int l = len(i);
        if (maxCt<l) maxCt=l;
    }
    return maxCt;
}


signed main(){
    int i, j, tmp, maxn;
    while (cin>>i>>j){
        cout<<i<<' '<<j<<' ';
        if (i>j) swap(i, j);
        cout<<m(i, j)<<endl;
    }
    return 0;
}
