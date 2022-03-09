#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 1000005

using namespace std;

vector<bool> isPri(MAXN, 1);
void build(){
    isPri[0] = isPri[1] = 0;
    for (auto i=2;i*i<=MAXN;i++){
        if (isPri[i]){
            for (auto j=i+i;j<=MAXN;j+=i) isPri[j]=0;
        }
    }
}

int rev(int x){
    int res = 0;
    while (x){
        res+=x%10;
        res*=10;
        x/=10;
    }
    return res/10;
}

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    int n;
    build();
    while (cin>>n){
        //cout<<isPri[n]<<endl;
        cout<<n<<(isPri[n]?(isPri[rev(n)]&&rev(n)!=n?" is emirp.":" is prime."):" is not prime.")<<endl;
    }
    return EXIT_SUCCESS;
}