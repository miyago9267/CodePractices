#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0)
#define ll long long
#define inf 0x3f3f3f3f
#define MAXN maxn
#define MODN modn
#define pii pair<int, int>
#define F first
#define S second

using namespace std;

class Solution{
    public:

    private:
    
};

signed main(){
    IO;
    #ifdef DEBUG
        cin.tie(0);cout.sync_with_stdio(0);
        string rootPath = "/public/miyago/ContestWriteUp";
        freopen((rootPath+"/Debug/t.in").c_str(), "r", stdin);
        freopen((rootPath+"/Debug/t.out").c_str(), "w", stdout);
    #endif

    int t,n,a,b;
    cin >> t;
    while(t--){
        cin >> n;
        vector<pii> vii;
        for(auto i=0; i<n; i++){
            cin >> a >> b;
            vii.pb({a,b});
        }
        sort(vii.begin(), vii.end(), [](pii &a, pii &b){
             if(a.F == b.F) return a.S > b.S;
             return a.F < b.F;
        });
        deque<int> nested;
        for(auto i=0; i<n; i++){
            int pos = lower_bound(nested.begin(),nested.end(),vii[i].S) - nested.begin();
            if(pos == 0)
                nested.push_front(vii[i].S);
            else 
                nested[pos-1] = vii[i].S;
        }
        cout << nested.size() << endl;
    }
    return EXIT_SUCCESS;
}