#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN 105
#define MOD modn
#define ll long long

using namespace std;

char alpha[] = {'a', 'e', 'i', 'o', 'u'};

signed main(){
    IO;
    // freopen("p.in", "r", stdin);
    // freopen("p.out", "w", stdout);
    int spc, n;
    map<string, string> spe;
    while (cin>>spc>>n){
        for (auto i=0;i<spc;i++){
            string s1, s2;
            cin>>s1>>s2;
            spe[s1]=s2;
        }
        for (auto i=0;i<n;i++){
            int hasY = 0;
            string s;
            cin>>s;
            if (spe.count(s)) {
                cout<<spe[s]<<endl;
                continue;
            }
            if (s[s.length()-1] == 'y'){
                int l2a = 0;
                for (auto v:alpha){
                    if (s[s.length()-2] == v){
                        l2a = 1;
                    } 
                }
                if (!l2a){
                    cout<<s.substr(0, s.length()-1)<<"ies"<<endl;
                    hasY = 1;
                }
            }
            if (hasY--) continue;
            string sl2 = s.substr(s.length()-2, 2), sl1 = s.substr(s.length()-1, 1);
            if (sl1 == "o" || sl1 == "s" || sl2 == "ch" || sl2 == "sh" || sl1 == "x"){
                cout<<s<<"es"<<endl;
                continue;
            }
            cout<<s<<"s"<<endl;
        }
    }
    return EXIT_SUCCESS;
}