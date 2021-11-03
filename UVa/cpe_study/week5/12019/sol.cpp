#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

signed main(){
    int n, m, d, days[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    string w[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    cin>>n;
    while (n--){
        cin>>m>>d;
        cout<<w[(days[m-1]+d)%7]<<endl;
    }
    return 0;
}
