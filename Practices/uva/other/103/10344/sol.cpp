#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0)
#define ll long long
#define inf 0x3f3f3f3f
#define MAXN maxn
#define MODN modn

using namespace std;

class Solution{
    public:

    private:
    
};

int arr[5];
bool rec(int i, int ans) {
	if(i == 5) 	return ans == 23;
	return rec(i + 1, ans + arr[i]) || rec(i + 1, ans - arr[i]) || rec(i + 1, ans * arr[i]);
}

signed main(){
    IO;
    #ifdef DEBUG
        cin.tie(0);cout.sync_with_stdio(0);
        string rootPath = "/public/miyago/ContestWriteUp";
         freopen((rootPath+"/Debug/t.in").c_str(), "r", stdin);
         freopen((rootPath+"/Debug/t.out").c_str(), "w", stdout);
    #endif

    while(cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4]) {
		bool flag = 0;
		if(arr[0] + arr[1] + arr[2] + arr[3] + arr[4] == 0) break;
		sort(arr, arr + 5);
		do {
			flag |= rec(1, arr[0]);
			if(flag) break;
		} while(next_permutation(arr, arr + 5));
		cout << (flag ? "Possible" : "Impossible") << '\n';
	}

    return EXIT_SUCCESS;
}