#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

signed main(){
    int n;
    while(cin>>n) {
        int sum = 0, emp = 0;
        while(n+emp > 2) {
            sum += n; emp += n;
            n = emp / 3;
            emp %= 3;
        }
        sum += n;
        if(n+emp == 2) sum++;
        cout<<sum<<endl;
    }
    return 0;
}
