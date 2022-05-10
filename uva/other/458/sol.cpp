#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0),  cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

signed main(){
    IO;
    string s;
    while (cin>>s){
        for (int i=0;i<s.length();i++){
            s[i]=char(int(s[i])-7);
        }
        cout<<s<<endl;
    }
    return 0;
}