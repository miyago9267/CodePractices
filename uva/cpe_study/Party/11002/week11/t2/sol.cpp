#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios::sync_with_stdio(0);cin.tie(0)

using namespace std;

signed main(){
    //IO;
    #ifdef DEBUG
        freopen("p.in", "r", stdin);
        freopen("p.out", "w", stdout);
    #endif

    int n;
    while(cin>>n){
        if(n==0) break;
        int top=1;
        int dice[4]={2,4,5,3};
        string s;
        while(n--){
            cin>>s;
            if(s=="south"){     dice[2]=top; top=dice[0]; dice[0]=7-dice[2];}
            else if(s=="west"){ dice[3]=top; top=dice[1]; dice[1]=7-dice[3];}
            else if(s=="north"){dice[0]=top; top=dice[2]; dice[2]=7-dice[0];}
            else if(s=="east"){ dice[1]=top; top=dice[3]; dice[3]=7-dice[1];}
        }
        cout<<top<<endl;
    }
    return EXIT_SUCCESS;
}