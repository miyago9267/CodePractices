#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

class Solution {
    public:
        vector<int> sortArrayByParity(vector<int>& nums) {
            vector<int> tmp;
            for (auto e:nums) {
                if (e&1) tmp.push_back(e); 
                else tmp.insert(tmp.begin(), e);
            }
            return tmp;
        }
};

signed main(){
    vector<int> q;
    int T, targ;
    cin>>T;
    for (int i=0; i<T; i++) {
        int v; cin>>v; q.push_back(v);
    }
    Solution sol;
    for (auto e:sol.sortArrayByParity(q)) cout<<e<<' ';
    cout<<endl;
    return 0;
}