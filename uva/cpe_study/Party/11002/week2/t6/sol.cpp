#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define INF 0x3f3f3f3f

using namespace std;

vector<vector<int>> mp(105, vector<int>(105, INF));
vector<int> d(105, INF);
vector<int> t(6), f(105);

void insertEdge(int s, int c) {
    for (auto i=0;i<c;i++){
        for (auto j=i+1;j<c;j++){
            if (abs(f[i]-f[j])*t[s]<mp[f[i]][f[j]]) mp[f[i]][f[j]]=mp[f[j]][f[i]]=abs(f[i]-f[j])*t[s];
        }
    }
}

void dij() {
    vector<int> book(105, 0);
    d[0] = 0;
    for (auto i=0; i<100; i++) {
        int x, maxn=INF;
        for(int j=0; j<100; j++){
            if (!book[j]&&d[j]<maxn) {
                maxn=d[x=j];
            }
        }
        book[x]=1;
        for (int j=0; j<100; j++){
            if (d[j]>d[x]+mp[x][j]+60){
                d[j]=d[x]+mp[x][j]+60;
            }
        }
    }
}

signed main(){
    //IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    int n, k;
    while (cin>>n>>k) {
        vector<vector<int>> nmp(105, vector<int>(105, INF));
        vector<int> nd(105, INF);
        vector<int> nt(6), nf(105);
        mp = nmp; d = nd; t = nt; f = nf;
        for (auto i=0;i<n;i++) cin>>t[i];
        for (auto i=0; i<n; i++) {
            int ct = 0;
            while (1){
                int tmp; cin>>tmp;
                f[ct++] = tmp;
                if (getchar()=='\n') break; 
            }
            insertEdge(i, ct);
        }
        dij();
        if (d[k]==INF) cout<<"IMPOSSIBLE"<<endl;
        else if (!k) cout<<"0"<<endl;
        else cout<<d[k]-60<<endl;
    }
    return EXIT_SUCCESS;
}