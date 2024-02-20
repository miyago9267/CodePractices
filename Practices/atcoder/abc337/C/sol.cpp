#include <bits/stdc++.h>
#define endl "\n"
#define IO ios_base::sync_with_stdio(0)

using namespace std;

void solve() {
    map<int, int> mp;
    int n, x; cin >> n;
    for (auto i=0; i<n; ++i) cin >> x, mp[x] = i+1;
    x = mp[-1];
    cout << x;
    while (--n) x = mp[x], cout << " " << x;
    cout << endl;
}

signed main() {
    IO;
    solve();

    return EXIT_SUCCESS;
}