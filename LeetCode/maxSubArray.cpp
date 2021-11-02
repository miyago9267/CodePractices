#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx = -10005, sum = 0;
        for (int i=0; i<nums.size(); i++){
            sum += nums[i];
            maxx = max(maxx, sum);
            if (sum < 0) sum = 0;
        }
        return maxx;
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
    cout<<sol.maxSubArray(q);
    cout<<endl;
    return 0;
}