#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int res = 0;
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size(); i+=2) res += nums[i];
        return res;
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
    //for (auto e:sol.arrayPairSum(q)) cout<<e<<' ';
    cout<<sol.arrayPairSum(q);
    cout<<endl;
    return 0;
}