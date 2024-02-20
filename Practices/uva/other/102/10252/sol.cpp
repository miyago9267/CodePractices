#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

signed main(){
    //freopen("p.in","r",stdin);
    //freopen("p.out","w",stdout);
    vector<char> sep;
    string a, b;
    while (getline(cin, a) && getline(cin, b)) {
        sep.clear();
        vector<int> s1(26, 0), s2(26, 0);
        for (auto e:a){
            s1[(int)e-'a']++;
        }
        for (auto e:b){
            s2[(int)e-'a']++;
        }
        for (auto i=0;i<26;i++){
            if (s1[i]>0 && s2[i]>0){
                for (auto ct=0;ct<min(s1[i], s2[i]);ct++)
                    cout<<(char)(i+'a');
            }
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}
