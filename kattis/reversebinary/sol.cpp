// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.sync_with_stdio(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

class Solution{
    public:

    private:
    
};

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    int n; string s=""; cin>>n;
    while (n){
        s += (char)(n%2+'0');
        n/=2;
    }
    int res = 0, p = 1;
    for (int i=s.size()-1; i>-1; i--, p*=2){
        res += (s[i]-'0')*p;
    }
    cout<<res<<endl;
    return EXIT_SUCCESS;
}
