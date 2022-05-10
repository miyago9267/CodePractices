#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

signed main(){
    int n, ct;
    
    while(cin >> n && n){
        string s = "";ct = 0;
        while(n > 0){
            if(n & 1) s = "1" + s, ct++;
            else s = "0" + s;
            n >>= 1;  
        }
        cout << "The parity of "<< s << " is " << ct << " (mod 2).\n";
    }
}
