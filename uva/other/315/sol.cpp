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

vector<vector<int>> edge;
vector<int> dfn, low;
int res, cnt, man, x;

void dfs(int u, int p) {
	int ap = 0;
	int child = 0;
	dfn[u] = low[u] = ++cnt;
	for(int v : edge[u]) {
		if(!dfn[v]) {
			child++;
			dfs(v, u);
			low[u] = min(low[u], low[v]);
			if (low[v] >= dfn[u]) ap = 1;
		}
		else if(v != p) low[u] = min(low[u], dfn[v]);
	}
	if ((child>=2 || p!=-1) && ap) res++;
}

signed main(){
    IO;
    #ifdef DEBUG
        cin.tie(0);cout.sync_with_stdio(0);
        string rootPath = "/public/miyago/ContestWriteUp";
         freopen((rootPath+"/Debug/t.in").c_str(), "r", stdin);
         freopen((rootPath+"/Debug/t.out").c_str(), "w", stdout);
    #endif

    int n;
	string s;
	while(cin >> n && n) {
		res = 0, cnt = 0;
		edge.assign(n+1, vector<int> ());
		dfn.assign(n+1, 0);
		low.assign(n+1, 0);
		cin.ignore();

		while(getline(cin, s)){
			stringstream ss(s);
			ss >> man;
			if(!man) break;
			while(ss >> x)
				edge[man].emplace_back(x), edge[x].emplace_back(man);
		}
		dfs(1, -1);
		cout << res << '\n';
	}

    return EXIT_SUCCESS;
}