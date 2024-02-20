#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long
#define pii pair<int, int>

using namespace std;

signed main(){
    int table[10000][10] = {0};
    for (auto i=0;i<10000;i++){
        if (i){
            for (auto j=0;j<10;j++) table[i][j]=table[i-1][j];
        }
        int tmp = i+1;
        while (tmp) {
            table[i][tmp%10]++;
            tmp/=10;
        }
    }
    int T, n;
    cin>>T;
    while (T--){
        cin>>n;
        for (auto e=0;e<10;e++) cout<<table[n-1][e]<<(e<9?" ":"");
        cout<<endl;
    }
    return EXIT_SUCCESS;
}