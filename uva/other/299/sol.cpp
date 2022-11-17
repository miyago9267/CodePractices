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

signed main(){
    IO;
    #ifdef DEBUG
        cin.tie(0);cout.sync_with_stdio(0);
        string rootPath = "/public/miyago/ContestWriteUp";
         freopen((rootPath+"/Debug/t.in").c_str(), "r", stdin);
         freopen((rootPath+"/Debug/t.out").c_str(), "w", stdout);
    #endif

    int n;
    int arr[200];

    cin >> n;
	while(cin >> n) {
		for(int i = 0; i < n; i++) cin >> arr[i];
		int ans = 0;
		for(int i = 0; i < n; i++)
            for(int j = i + 1; j < n; j++) 
			    if(arr[i] > arr[j]) ans++, swap(arr[i], arr[j]);
		cout << "Optimal train swapping takes " << ans << " swaps.\n";
	}

    return EXIT_SUCCESS;
}