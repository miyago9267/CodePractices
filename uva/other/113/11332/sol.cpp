#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

int solve(int inp){
    int tmp = inp, sum = 0;
    while (tmp) {
        sum += tmp%10;
        tmp /= 10;
    }
    if (sum > 9) sum = solve(sum);
    return sum;
}

signed main(){
    IO;
    //freopen("p.in", 'r', stdin);
    //freopen("p.out", 'w', stdout);
    int n;
    while(cin>>n, n) {
        cout<<solve(n)<<endl;
    }
    return 0;
}
