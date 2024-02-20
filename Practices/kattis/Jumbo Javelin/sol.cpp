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
    int n, res, t; cin>>n, res=-n+1;
    while (n--){
        cin>>t, res+=t;
    }
    cout<<res<<endl;
    return EXIT_SUCCESS;
}
