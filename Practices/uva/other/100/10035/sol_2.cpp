#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

signed main(){
    //IO;
    string a, b;
    while (cin>>a>>b && a!="0" && b!="0") {
        int mx = 0, c;
        while (a.size()!=b.size()) {
            a.size()>b.size()?b = "0"+b:a = "0"+a;
        }
        for (int i=a.size();i>-1;i--) {
            if (int(a[i]+b[i]) + c >= 106) {
                c = 1;
                mx++;
            }
            else c = 0;
        }
        if (!mx) cout<<"No carry operation."<<endl;
        else if (mx==1) cout<<"1 carry operation."<<endl;
        else cout<<mx<<" carry operations."<<endl;
    }
    return 0;
}
