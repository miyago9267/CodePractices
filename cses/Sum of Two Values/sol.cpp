#include <bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.sync_with_stdio(0)
using namespace std;

pii solve(vector<int>& nums, int targ) {
    map<int, int> mp;
    for (auto e=0;e<nums.size();e++){
        int diff=targ-nums[e];
        if (mp.find(diff)!=mp.end()) return {mp[diff]+1, e+1};
        mp[nums[e]]=e;
    }
    return {};
}

signed main(){
    IO;
    int n, x; cin>>n>>x;
    vector<int> v(n);
    for (auto &e:v) cin>>e;
    pii res = solve(v, x);
    if (res == pii()) cout<<"IMPOSSIBLE"<<endl;
    else cout<<res.first<<" "<<res.second<<endl;
    return EXIT_SUCCESS;
}
