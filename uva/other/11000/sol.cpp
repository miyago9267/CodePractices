#include <bits/stdc++.h>
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define MAXN 100005

using namespace std;

signed main(){
	IO;

    vector<int> owo(MAXN, 0); owo[1] = 1;
    for (int i=2; i<MAXN; i++) owo[i] = owo[i-1]+owo[i-2]+1;

	int n;
    while (cin>>n&&n!=-1) cout<<owo[n]<<' '<<owo[n+1]<<endl;
    return EXIT_SUCCESS;
}

/*  owo owo owo owo






*/