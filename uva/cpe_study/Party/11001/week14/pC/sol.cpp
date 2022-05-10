#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN 105
#define MOD modn
#define ll long long

using namespace std;


signed main(){
    //IO;
    // freopen("p.in", "r", stdin);
    // freopen("p.out", "w", stdout);
    int T, ct=0, num; cin>>T; 
    string s;
    getline(cin, s);
    vector<pair<int, string>> vec;
    stringstream ss;
    while (T--){
        if (ct++) cout<<endl;
        vec.clear(); ss.str(""); ss.clear();
        getline(cin, s);
        getline(cin, s);
        ss << s;
        while (ss >> num) {
            vec.push_back(make_pair(num, ""));
        }
        for (auto &v:vec){
            cin>>s; v.second = s;
        }
        getline(cin, s);
        sort(vec.begin(), vec.end());
        for (auto v:vec) cout<<v.second<<endl;
    }
    return EXIT_SUCCESS;
}