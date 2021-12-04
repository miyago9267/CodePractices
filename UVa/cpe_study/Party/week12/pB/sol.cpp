#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

signed main(){
    //freopen("p.in","r",stdin);
    //freopen("p.out","w",stdout);
    const double pi = M_PI;
    double a;
    int s, r = 6440;
    string f;
    while (cin>>s>>a>>f){
        s += r;
        a = (f=="min"?a/60:a);
        while (a>=360) a-=360;
        a = (a>180?360-a:a);
        cout<<setprecision(6)<<fixed<<2*s*a*pi/360<<' ';
        cout<<setprecision(6)<<fixed<<2*s*sin(a/2*pi/180)<<endl;
    }
    return EXIT_SUCCESS;
}
