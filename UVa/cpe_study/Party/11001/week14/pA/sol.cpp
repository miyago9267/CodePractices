#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;


signed main(){
    IO;
    // freopen("p.in", "r", stdin);
    // freopen("p.out", "w", stdout);
    string s;
    stringstream ss;
    set<int> use;
    while (getline(cin, s)) {
        int num, flag = 0, ct;
        ss.str(""); ss.clear(); use.clear();
        vector<int> vec;
        ss << s;
        ss >> ct;
        while (ss >> num) {
            vec.push_back(num);
        }
        for (auto i=0;i<vec.size()-1;i++){
            int owo = abs(vec[i]-vec[i+1]);
            use.insert(owo);
            if (owo < 1 || owo >= ct){
                flag = 1;
                break;
            } 
        }
        for (auto i=1; i<ct; i++) if (!use.count(i)) flag = 1;
        cout<<(flag?"Not jolly":"Jolly")<<endl;

        
    }
    return EXIT_SUCCESS;
}