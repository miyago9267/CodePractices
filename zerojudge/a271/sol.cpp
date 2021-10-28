#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

signed main(){
    int T; cin>>T;
    while (T--){
        long long eat[5], x, y, z, w, n, m, poi=0, die=0;
        cin>>x>>y>>z>>w;
        cin>>n>>m;
        eat[0] = 0, eat[1] = x, eat[2] = y, eat[3] = -z, eat[4] = -w;
        string s;
        char enter = getchar();
        getline(cin, s);
        for (int i=0; i<s.length(); i+=2){
            m -= poi*n;
            if (m <= 0) {
                die = 1;
                break;
            }
            m += eat[s[i]-'0'];
            if (s[i] == '4') poi++;
        }
        if (die || m <= 0) cout<<"bye~Rabbit"<<endl;
        else cout<<m<<'g'<<endl;

    }
    return 0;
}
