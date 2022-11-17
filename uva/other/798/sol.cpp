#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0)
#define ll long long
#define inf 0x3f3f3f3f
#define DD(x) cout << #x << " = " << x << endl
#define MAXN maxn
#define MODN modn

using namespace std;

vector<int> m(20), w(20), h(20);
vector<vector<int>> puzzle(105, vector<int>(105, 0));
// int m[15], w[15], h[15];
// int puzzle[105][105];
int res, r, c, n;

void dfs(int x, int y);
bool check(int x, int y, int p, int q) {
	if (x + p > r || y + q > c) return 0;
	for (int i = 0; i < p; i++) 
		for (int j = 0; j < q; j++) 
			if (puzzle[x + i][y + j]) return 0;
	return 1;
}

void setPuzzle(int x, int y, int p, int q, int d) {
	for (int i = 0; i < p; i++) 
		for (int j = 0; j < q; j++)	
			puzzle[x + i][y + j] = d;
}

void iJustDontWannaDoSameThingTwiceSoINameThisFuncSoLong(int p, int q, int x, int y, int &ss) {
	setPuzzle(p, q, x, y, 1), ss--;
	dfs(x, y + 1);
	setPuzzle(p, q, x, y, 0), ss++;
}

void dfs(int x, int y) {
	if (y >= c) 
		x++, y = 0;
	if (x >= r) {
		res++; return;
	}

	if (!puzzle[x][y]) {
		for (int i = 0; i < n; i++) 
			if (m[i]) {
				if (check(x, y, w[i], h[i])) 
					iJustDontWannaDoSameThingTwiceSoINameThisFuncSoLong(w[i], h[i], x, y, m[i]);
				if (check(x, y, h[i], w[i]) && h[i] != w[i]) 
					iJustDontWannaDoSameThingTwiceSoINameThisFuncSoLong(h[i], w[i], x, y, m[i]);
			}
	} else
		dfs(x, y + 1);
}

signed main(){
    IO;
    #ifdef DEBUG
        cin.tie(0);cout.sync_with_stdio(0);
        string rootPath = "/public/miyago/ContestWriteUp";
         freopen((rootPath+"/Debug/t.in").c_str(), "r", stdin);
         freopen((rootPath+"/Debug/t.out").c_str(), "w", stdout);
    #endif

    while (cin >> c >> r >> n ) {
		res = 0;
		puzzle.assign(105, vector<int>(105, 0));
		// memset(puzzle, 0, sizeof(puzzle));
		for (int i = 0; i < n; i++) cin >> m[i] >> w[i] >> h[i];
		dfs(0, 0);
		cout << res << endl;
	}

    return EXIT_SUCCESS;
}