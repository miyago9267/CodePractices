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

    string s; int res = 0, tmp = 0, b=0, e=0; cin>>s; s+=';';
    for (auto i=0;i<s.size();i++){
        if (isdigit(s[i])){
            tmp*=10;
            tmp+=s[i]-'0';
        } else if (s[i]=='-') b = tmp, tmp = 0, e=1;
        else if (s[i]==';') res+=(e?tmp-b+1:1), tmp = 0, e=0;
    }
    cout<<res<<endl;
    return EXIT_SUCCESS;
}
