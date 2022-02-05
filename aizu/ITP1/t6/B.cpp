// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

signed main(){
    //IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    char s;
    int n, ct;
    vector<vector<int>> vec(4, vector<int> (13, 0));
    map<char, int> s2i = {{'S',0},{'H',1},{'C',2},{'D',3}};
    map<int, char> i2s = {{0,'S'},{1,'H'},{2,'C'},{3,'D'}};
    cin>>n;
    while (n--){
        cin>>s>>ct;
        vec[s2i[s]][ct-1]=1;
    }
    for (auto e=0;e<4;e++){
        for (auto u=0;u<13;u++){
            if (!vec[e][u])cout<<i2s[e]<<' '<<u+1<<endl;
        }
    }
    return EXIT_SUCCESS;
}