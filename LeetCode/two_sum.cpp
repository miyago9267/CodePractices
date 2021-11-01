#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> prev;

            for (int i=0; i<nums.size(); i++) {
                int diff = target - nums[i];
                if (prev.find(diff) != prev.end())
                    return {prev[diff], i};
                prev[nums[i]] = i;
            }
            return {};
        }
};

signed main(){
    vector<int> q;
    int T, targ;
    cin>>T>>targ;
    for (int i=0; i<T; i++) {
        int v; cin>>v; q.push_back(v);
    }
    Solution sol;
    for (auto e:sol.twoSum(q, targ)) cout<<e<<' ';
    cout<<endl;
    return 0;
}