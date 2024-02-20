#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio;cin.tie(0)
#define ll long long
#define pb push_back
#define MAXN
#define MODN

using namespace std;

signed main(){
    //IO;
    #ifdef DEBUG
        freopen("p.in", "r", stdin);
        freopen("p.out", "w", stdout);
    #endif

    int kase=0;
    int n;
    while(cin>>n){
        kase++;
        if(n==0) break;
        vector <int> number;
        int sum=0;
        while(n--){
            int x; cin>>x;
            sum+=x;
            number.push_back(x);
        }
        int ans=0;
        for(auto x:number){
            if(sum/number.size()>x){
                ans+=sum/number.size()-x;
            }
        }
        cout<<"Set #"<<kase<<endl;
        cout<<"The minimum number of moves is "<<ans<<"."<<endl<<endl;
    }
}