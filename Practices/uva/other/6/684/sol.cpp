#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define inf 0x3f3f3f3f
#define MAXN maxn
#define MODN modn

using namespace std;

typedef vector<ll> vec;
typedef vector<vec> mat;

ll determinant(mat m) { // square matrix
    const int n = m.size();
    ll det = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int a = i, b = j;
            while (m[b][i]) {
                ll q = m[a][i] / m[b][i];
                for (int k = 0; k < n; k++)
                    m[a][k] = m[a][k] - m[b][k] * q;
                swap(a, b);
            }
            if (a != i) {
                swap(m[i], m[j]);
                det = -det;
            }
        }
        if (m[i][i] == 0)
            return 0;
        else
            det *= m[i][i];
    }
    return det;
}

signed main(){
    IO;
    #ifdef DEBUG
        string rootPath = "/public/miyago/ContestWriteUp";
        freopen((rootPath+"/Debug/t.in").c_str(), "r", stdin);
        freopen((rootPath+"/Debug/t.out").c_str(), "w", stdout);
    #endif

    int n;
    while (cin >> n) {
        if (!n) break;

        mat m(n, vec(n, 0));
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                cin >> m[r][c];
            }
        }

        cout << determinant(m) << endl;
    }

    cout << "*" << endl;

    return EXIT_SUCCESS;
}