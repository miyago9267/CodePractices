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

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
 
    while (cin>>s) {
        list<char> l;
        list<char>::iterator it = l.begin();
        for (auto c:s) {
            if (c=='[') it=l.begin();
            else if (c==']') it=l.end();
            else l.insert(it, c);
        }
        for (auto i=l.begin(); i!=l.end(); i++)
            cout << *i;
        cout << endl;
    }

    return EXIT_SUCCESS;
}
