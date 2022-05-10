#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long
#define pii pair<int, int>

using namespace std;

signed main(){
    //IO;
    int n, ct=0;
    vector<int> table;
    for (auto i=0;i<15;i++) table.push_back(pow(2, i));
    while (cin>>n && n>-1){
        cout<<"Case "<<++ct<<": ";
        for (auto e=0;e<table.size();e++){
            if (n<=table[e]) {
                cout<<e<<endl;
                break;
            }
        }
    }
    return EXIT_SUCCESS;
}