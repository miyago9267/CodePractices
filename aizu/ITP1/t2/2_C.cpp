#include <bits/stdc++.h>
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define MAXN maxn

using namespace std;

signed main(){
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr, arr+3);
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	return 0;
}
