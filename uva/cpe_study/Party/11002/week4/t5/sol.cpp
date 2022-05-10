#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.sync_with_stdio(0)
#define ll long long
#define MAXN 1000005

using namespace std;

ll res;
vector<int> vec(MAXN);
vector<int> B(MAXN);

void merge(vector<int> &A, int l, int m, int r) {
	int idx1 = l, idx2 = m+1;
	int top = 0, cnt = 0;
	while (idx1 <= m && idx2 <= r) {
		if (A[idx1] <= A[idx2])
			B[top++] = A[idx1++], res += cnt;
		else
			B[top++] = A[idx2++], cnt++;
	}
	while (idx1 <= m)
		B[top++] = A[idx1++], res += cnt;
	while (idx2 <= r)
		B[top++] = A[idx2++];
	for (auto i=0; i<top; i++)
		A[l+i] = B[i];
}

void mergesort(vector<int> &A, int l, int r) {
	if (l >= r)	return;
	int m = (l+r)>>1;
	mergesort(A, l, m);
	mergesort(A, m+1, r);
	merge(A, l, m, r);
}

signed main() {
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    
    int n;
	while (cin>>n && n) {
		for (auto ct=0; ct<n; ct++)
			cin>>vec[ct];
		res = 0;
		mergesort(vec, 0, n-1);
		cout<<res<<endl;
	}
	return 0;
}