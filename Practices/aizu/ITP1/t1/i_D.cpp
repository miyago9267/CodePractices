#include <bits/stdc++.h>
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define MAXN maxn

using namespace std;

signed main(){
    int s;
    cin>>s;
    printf("%d:%d:%d\n", s/60/60, (s/60)%60, s%60);
	return 0;
}
