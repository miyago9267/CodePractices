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
    string s;
    int targ, T;
    cin>>T; char tmp = cin.get(); getline(cin, s);
    for (int ct=1;ct<=T;ct++){
        cout<<"Case #"<<ct<<":"<<endl;
        while (getline(cin, s)){
            //if (ct==0) break;
            if (s.empty()){
                break;
            }
            targ=0;
            string tmp="";
            s = s + ' ';
            for (auto e:s){
                if (e!=' ') tmp = tmp + e;
                else {
                    if (tmp.length()>targ) {
                        //cout<<' '<<targ;
                        cout<<tmp[targ];
                        targ++;
                    }
                    tmp="";
                }
            }
            cout<<endl;
        }
        if (ct<T) cout<<endl;
    }
    return EXIT_SUCCESS;
}
