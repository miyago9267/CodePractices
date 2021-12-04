#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

int dig(int n){
    int res=0;
    while (n){
        res+=n%10;
        n/=10;
    }
    return res;
}

signed main(){
    //freopen("p.in","r",stdin);
    //freopen("p.out","w",stdout);
    vector<int> credit;
    string s;
    int T; cin>>T; char ent = getchar();
    while (T--) {
        credit.clear();
        getline(cin, s);
        for (auto e:s) if (e>='0' && e<='9') credit.push_back((int)e-'0');
        int sum=0;
        for (auto i=0;i<16;i++) {
            if (i&1) sum+=credit[i];
            else sum+=dig(credit[i]*2);
        }
        cout<<((sum%10)?"Invalid":"Valid")<<endl;
    }
    return EXIT_SUCCESS;
}
