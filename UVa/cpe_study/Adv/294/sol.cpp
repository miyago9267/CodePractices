// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN 1000000000
#define MOD modn
#define ll long long

using namespace std;

vector<bool> table(ceil(sqrt(MAXN)), 0);
vector<int> pri;

void build(){
    table[0] = table[1] = 1;
    for (int i=2; i*i <= sqrt(MAXN); i++){
        if (!table[i]){
            for (int j=i*i;j<=sqrt(MAXN);j+=i){
                    table[j] = true;
            }
        }
    }
    for (auto it=0;it<table.size();it++){
        if (!table[it])
            pri.push_back(it);
    }
}

int solve(int n){
    if (n<floor(sqrt(MAXN))&&!table[n])
        return 2;
    int tmp = n, i=0, res=1;
    for (auto it:pri){
        int pow = 1;
        if (it>tmp)
            break;
        while (!(tmp%it)){
            pow++;
            tmp/=it;  
        }
        res*=pow;
    }
    if (tmp>1) res*=2;
    return res;

}

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    build();
    int T,l, r;
    cin>>T;
    while (T--){
        int maxx = -1, maxn = -1;
        cin>>l>>r;
        for (int i=l;i<=r;i++){
            int tmp = solve(i);
            if (tmp>maxx)
                maxx = tmp, maxn = i;
        }
        cout<<"Between "<<l<<" and "<<r<<", "<<maxn<<" has a maximum of "<<maxx<<" divisors."<<endl;

    }
    return EXIT_SUCCESS;
}
