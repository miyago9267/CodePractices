// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long
#define pii pair<ll, ll>

using namespace std;

signed main(){
	//IO;
	//freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    string n, m, res="";
    int sn=0, sm=0;
    cin>>n>>m;
    if (n[0]=='-'){
        sn=1;
        n = n.substr(1, n.size()-1);
    }
    if (m[0]=='-'){
        sm=1;
        m = m.substr(1, m.size()-1);
    }
    if (n.length() < m.length()) swap(n, m);
    while (n.length() > m.length()) m = '0'+m;
    int l = m.length()-1, carry = 0;
    while (l>-1 || carry){
        int a = int(n[l]-'0')*(sn?-1:1);
        int b = int(m[l--]-'0')*(sm?-1:1);
        int sum = a+b+carry;
        if (a+b<0) {
            sum += 10;
            carry = -1;
        }
        else{
            carry = sum/10;
        }
        res = char(sum%10+'0') + res;
    }
    while (res[0]=='0') res = res.substr(1, res.length()-1);
    cout<<res<<endl;
}