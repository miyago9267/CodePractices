#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

int ch[26] = {0};

signed main(){
    //IO;
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int T, maxx = -1; string s;
    cin>>T;
    char ret = getchar();
    while (T--) {
        getline(cin, s);
        for (auto e:s) {
            int tmp = -1;
            if (e>='A' && e<='Z') tmp = e -'A';
            else if (e>='a' && e<='z') tmp = e -'a';
            if (tmp !=-1 ) {
                ch[tmp]++;
                if (maxx < ch[tmp]) maxx = ch[tmp];
            }    
        }
    }
    for (int i=maxx; i>0; i--){
        for (int j=0; j<26; j++){
            if (ch[j] == i) cout<<(char)(j+65)<<' '<<i<<endl;
        }
    }
    return 0;
}
