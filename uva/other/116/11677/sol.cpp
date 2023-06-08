#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

signed main(){
    int h1, h2, m1, m2, res;
    while (cin>>h1>>m1>>h2>>m2){
        if ((h1+h2+m1+m2) == 0 && (h1*h2*m1*m2) == 0) break;
        if (h1>h2 || (h1==h2 && m1>m2)) h2+=24;
        res = (h2*60+m2)-(h1*60+m1);
        cout<<res<<endl;

    }
    return 0;
}
