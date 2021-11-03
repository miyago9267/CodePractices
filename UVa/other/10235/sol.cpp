#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN 1000005
#define MOD modn

using namespace std;

bool pri[MAXN] = {0};
void buildPri(){
    pri[0] = pri[1] = 1;
    for(int i=2; i<MAXN; i++){
        if(pri[i] == 0){
            for(int j=i+i; j<MAXN; j+=i){
                pri[j] = true;
            }
        }
    }
}

signed main(){
    //IO;
    //freopen("p.in", "r", stdin);
    //freopen("p.out", "w", stdout);
    buildPri();
    int n;
    while (cin>>n) {
        int tmp = n, rn = 0;
        while (tmp) {
            rn += tmp%10;
            rn *= 10; tmp /= 10;
        }
        cout<<rn<<endl;
        cout<<n<<(pri[n]?" is not prime.":(pri[rn/10]?" is prime.":" is emirp."))<<endl;
    }
    return 0;
}


