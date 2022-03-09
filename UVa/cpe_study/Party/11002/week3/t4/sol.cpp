// 幹你他媽怎麼會有負數== 難怪我會錯
#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb emplace_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define MAXN 10000005
#define MODN modn

using namespace std;

vector<ll> pri(10000005, 1);
vector<ll> p;  

void init(){
    for (auto i=2; i<10000005; i++){
        if (pri[i]) p.pb(i);
        for (auto e:p){
            if (i*e>=10000005) break;
            pri[i*e] = 0;
            if (!(i%e)) break;
        }
    }
}

signed main(){
    //IO;
    #ifdef DEBUG
        freopen("p.in","r",stdin);
        freopen("p.out","w",stdout);
    #endif
    init();
    ll n;
    while (cin>>n && n) {
        n = abs(n);
        int size=0;
        ll tmp = n, back;
        for (auto i:p) {
            if (i>n) break;
            if (!(tmp%i)){
                back=i, size++;
                while (!(tmp%i)) tmp/=i;
            }
        }
        if (tmp!=1) size++, back=tmp;
        cout<<(size>1?back:-1)<<endl;
    }
    return EXIT_SUCCESS;
}