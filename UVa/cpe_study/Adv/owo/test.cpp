// By myg9267
// i m bad in coding, so sad
// it a me mario
//#include <bits/stdc++.h>
#include <iostream>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

class Solution{
    public:
        void setVal(string str){
            this->val = str;
            return;
        }
        string getVal(){
            return this->val;
        }
    private:
        string val = "";
};

signed main(){
    IO;
    #ifdef DEBUG
		cout<<"\033[1;1;31mDebug outputing..."<<endl;
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    Solution s;
    s.setVal("hello");
    cout<<s.getVal()<<endl;
    return EXIT_SUCCESS;
}
