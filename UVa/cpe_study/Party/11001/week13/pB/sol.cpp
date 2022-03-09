#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long
#define pii pair<int, int>

using namespace std;

bool comp(pii x, pii y){
    if (x.second == y.second)  return x.first > y.first;
    return x.second < y.second;
}

signed main(){
    string s;
    int c=0;
    while (getline(cin, s)){
        if (c++) cout<<endl;
        map<int, int> ct;
        vector<pair<int,int>> tmp;
        for (auto e:s) {
            if (!ct.count(e)) ct[e]=1;
            else ct[(int)e]++;
        }
        for (const auto &v : ct){
            tmp.push_back(v);
        }
        sort(tmp.begin(), tmp.end(), comp);
        for (const auto &v : tmp) {
            cout<<v.first<<' '<<v.second<<endl;
        }
    }
    return EXIT_SUCCESS;
}