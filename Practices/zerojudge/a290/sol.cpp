#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN 805
#define MOD modn

using namespace std;

vector<int> vec[MAXN];
int book[MAXN] = {0};
int flag = 0, targ;

void dfs(int from){
    if (flag) return;
    if (from == targ) {
        flag = 1;
        return;
    }
    for (auto e:vec[from]) {
        if (!book[e]){
            book[e] = 1;
            dfs(e);
            book[from] = 0;
        }
    }
    return;
}

signed main(){
    IO;
    int n, m, a, b, A, B;
    while (cin>>n>>m) {
        for (auto k=0; k<MAXN; k++){
            vec[k].clear();
            book[k] = 0;
        }
        flag = 0;
        for (int i=0; i<m; i++){
            cin>>a>>b;
            vec[a].push_back(b);
        }
        cin>>A>>B; targ = B;
        dfs(A);
        cout<<(flag?"Yes!!!":"No!!!")<<endl;
    }
    return 0;
}
