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

struct point{
    double x, y;
};

// using hungarian algorithm to know how many gophers will not be eaten

vector<vector<bool>> edge(105, vector<bool>(105));
vector<int> lln(105), rln(105);
vector<bool> book(105);

bool dfs(int cur, int &m){
    for (int i = 0; i < m; i++){
        if (edge[cur][i] && !book[i]){
            book[i] = true;
            if (rln[i] == -1 || dfs(rln[i], m)){
                lln[cur] = i;
                rln[i] = cur;
                return 1;
            }
        }
    }
    return 0;
}

signed main(){
    IO;
    #ifdef DEBUG
        string rootPath = "/public/miyago/ContestWriteUp";
        freopen((rootPath+"/Debug/t.in").c_str(), "r", stdin);
        freopen((rootPath+"/Debug/t.out").c_str(), "w", stdout);
    #endif

    int n, m, s, v;
    vector<point> gopher(105), hole(105);
    while (cin>>n>>m>>s>>v){
        for (int i = 0; i < n; i++) cin>>gopher[i].x>>gopher[i].y;
        for (int i = 0; i < m; i++) cin>>hole[i].x>>hole[i].y;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                double dist = sqrt(pow(gopher[i].x-hole[j].x, 2)+pow(gopher[i].y-hole[j].y, 2));
                edge[i][j] = (dist <= s*v);
            }
        }

        int res = 0;
        fill(lln.begin(), lln.begin()+n, -1);
        fill(rln.begin(), rln.begin()+m, -1);
        for (int i = 0; i < n; i++){
            fill(book.begin(), book.begin()+m, false);
            if (dfs(i, m)) res++;
        }
        cout<<n-res<<endl;
    }

    return EXIT_SUCCESS;
}