// By myg9267
// i m suck at coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.sync_with_stdio(0)
#define ll long long
#define inf 0x3f3f3f3f
#define MAXN maxn
#define MODN modn
#define DD(a, b) cout << a << " = " << b << endl

using namespace std;

string s;
int img[1025];
int c;

void owo(int px, int cnt){
    c++;
    if (c >= s.size()) return;
    if (s[c]=='p') {
        cnt>>=2;
        for (auto i=0; i<4; i++)
            owo(px+cnt*i, cnt);
    }
    else if (s[c]=='f')
        for (auto i=px; i<px+cnt; i++)
            img[i] = 1;
}

//ppeffepeeffef

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif

    cin >> s;
    while (cin>>s) {
        memset(img, 0, sizeof(img));
        c = -1; owo(0, 1024);
        cin >> s;
        c = -1; owo(0, 1024);
        int ans=0;
        for (auto i=0; i<1024;i++)
            ans+=img[i];
        cout << "There are " << ans << " black pixels." << endl;
    }
 
    
    return EXIT_SUCCESS;
}
