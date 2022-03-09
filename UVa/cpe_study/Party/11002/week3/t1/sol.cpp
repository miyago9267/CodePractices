#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb emplace_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define MAXN maxn
#define MODN modn

using namespace std;

string mp = "22233344455566677778889999";

signed main(){
    //IO;
    #ifdef DEBUG
        freopen("p.in","r",stdin);
        freopen("p.out","w",stdout);
    #endif

    string s;
    while (cin>>s){
        for (auto c:s) cout<<(isalpha(c)?mp[c-'A']:c);
        cout<<endl;
    }
    return EXIT_SUCCESS;
}