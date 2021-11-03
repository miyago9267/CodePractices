#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == target) return i;
            else if (nums[i] > target) return i-1;
        }
        return 0;
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
    //for (auto e:sol.arrayPairSum(q)) cout<<e<<' ';
    cout<<sol.searchInsert(q, targ);
    cout<<endl;
    return 0;
}