#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define endll "\n\n"
#define ll long long
#define pb push_back

using namespace std;

struct trie {
    int cnt = 0;
    map<int, trie*> next;
} *root, *cur;

int solve(trie* root) {
    int res = 0;
    if (root->next.size()>1) {
        res += root->cnt;
        for (auto e:root->next){
            if (e.first == '.') res--;
        }
    }
    for (auto e:root->next) res+=solve(e.second);
    return res;
}

void buildTrie(string s, trie* root) {
    trie* cur = root;
    for (auto c: s) {
        cur->cnt++;
        if (!cur->next[c]) cur->next[c] = new trie;
        cur = cur->next[c];
    }
}

signed main() {
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    string s;
    int n, res;
    while (cin>>n) {
        res = 0;
        root = new trie;
        for (auto i=0; i<n; i++){
            cin>>s;
            s = s + ".";
            buildTrie(s, root);
        }
        res = solve(root) + (root->next.size()==1)*n;
        printf("%0.2f\n", 1.0*res/n);
    }
    
    return EXIT_SUCCESS;
}