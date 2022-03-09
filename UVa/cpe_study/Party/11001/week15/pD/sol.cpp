#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

map<char, int> dur = {{'W', 64}, {'H', 32}, {'Q', 16}, {'E', 8}, {'S', 4}, {'T', 2}, {'X', 1}};

signed main(){
    IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    string s;
    while (cin>>s, s!="*"){
        int res = 0, sum;
        for (auto e:s){
            if (e=='/'){
                if (sum == 64) res++;
                sum = 0;
            } else {
                sum += dur[e];
            }
        }
        cout<<res<<endl;
    }
    return EXIT_SUCCESS;
}
