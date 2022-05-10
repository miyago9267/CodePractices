// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#pragma GCC optimize("O1")
#pragma GCC optimize("O2")
#pragma GCC optimize("O3")
#define endl "\n"
#define endll "\n\n"
#define pb emplace_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.sync_with_stdio(0)
#define ll long long
#define MAXN maxn
#define MODN modn

using namespace std;

class Sol{
    public:
        void cal(string ipt){
            res = 0, ct = 0;
            for (auto c:ipt){
                if (c=='X') ct=0;
                else if (c=='O') res+=++ct;
            }
        }

        Sol (){
            cin>>testCt;
            while (testCt--) {
                cin>>ipt;
                cal(ipt);
                cout<<res<<endl;
            }
        }
    private:
        int testCt, res, ct;
        string ipt;
};

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif

    Sol s;
    return EXIT_SUCCESS;
}
