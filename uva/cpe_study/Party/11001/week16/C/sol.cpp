#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

vector<vector<string>> num = {
    {
        "x-x",
        "| |",
        "x x",
        "| |",
        "x-x"
    },
    {
        "x x",
        "x |",
        "x x",
        "x |",
        "x x"
    },
    {
        "x-x",
        "x |",
        "x-x",
        "| x",
        "x-x"
    },
    {
        "x-x",
        "x |",
        "x-x",
        "x |",
        "x-x"
    },
    {
        "x x",
        "| |",
        "x-x",
        "x |",
        "x x"
    },
    {
        "x-x",
        "| x",
        "x-x",
        "x |",
        "x-x"
    },
    {
        "x-x",
        "| x",
        "x-x",
        "| |",
        "x-x"
    },
    {
        "x-x",
        "x |",
        "x x",
        "x |",
        "x x"
    },
    {
        "x-x",
        "| |",
        "x-x",
        "| |",
        "x-x"
    },
    {
        "x-x",
        "| |",
        "x-x",
        "x |",
        "x-x"
    }
};

signed main(){
    IO;
    // freopen("p.in", "r", stdin);
    // freopen("p.out", "w", stdout);
    int w;
    string nums;
    while (cin>>w>>nums && (w || nums!="0")){
        int l=0; vector<int> ns;
        for (auto e:nums){
            ns.push_back(int(e-'0'));
        }
        for (auto ln=0;ln<5;ln++){
            if (ln&1){
                for (auto i=0;i<w;i++){
                    int ct=0;
                    for (auto n:ns) {
                        for (auto e:num[n][ln]){
                            if (e=='|') cout<<'|';
                            else if (e==' ') for (auto i=0;i<w;i++) cout<<e;
                            else cout<<' ';
                        }
                        if (ct++<ns.size()-1) cout<<' ';
                    }
                    cout<<endl;
                }
            }   
            else {
                int ct=0;
                for (auto n:ns){
                    for (auto e:num[n][ln]){
                        if (e=='x') cout<<' ';
                        else for (auto i=0;i<w;i++) cout<<e;
                    }
                    if (ct++<ns.size()-1) cout<<' ';
                }
                cout<<endl;
            }
        }
        cout<<endl;
        
    }
    return EXIT_SUCCESS;
}
