#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

int digGen[100005];

using namespace std;

void dig(){
    int sum, tmp;
    for(int i=100000; i>=1; i--) {
        sum = i; tmp = i;
        while(tmp > 0) {
            sum += tmp%10;
            tmp /= 10;
        }
        digGen[sum] = i;
    }
}

signed main() {
    dig();
    int N, targ;
    cin>>N;
    while (N--){
        cin>>targ;
        cout<<digGen[targ]<<endl;
    }
    return 0;
}