// damn, it will tle without break
// i forgot fucking MOD ==
// why it tle again
// i give up == 
// why i fucking tle again, wtfffffff, i just add my MOD
// 6 times dude
// ok i find the problem, on the fucking MOD, but if i take it out, it will wa
// my poor comments are almost more than my code length==
// idk how to make this fast more
// fuck it, i change it into c, okay?
// ok, finally, the problem is happen at the string  
//
// this is the struct ver.
#include <bits/stdc++.h>
#pragma GCC optimize("O1")
#pragma GCC optimize("O2")
#pragma GCC optimize("O3")
#define endl "\n"
#define endll "\n\n"
#define pb emplace_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.sync_with_stdio(0)
#define ll long long
#define MAXN 300005
#define MODN 20071027

using namespace std;

struct trie{
    bool end = 0;
    map<int, trie*> next;
    void addWord(char* s){
        trie* cur = this;
        for (int i=0;s[i]!='\0';++i){
            char c = s[i];
            if (!cur->next[c]) cur->next[c] = new trie();
            cur = cur->next[c];
        }
        cur->end = 1;
    }

    int findWord(char* s, int bg, int ed){
        trie* cur = this;
        for (auto i=bg;i<=ed;++i){
            char c=s[i];
            if (!cur->next[c]) return -1;
            cur = cur->next[c];
        }
        if (!cur) return -1;
        else if (cur->end) return 1;
        else return 0;
    }
}*root;

vector<int> dp(MAXN);
int ct = 0, n;
char s[MAXN], w[105];

signed main(){
    IO;
    #ifdef DEBUG
        freopen("p.in","r",stdin);
        freopen("p.out","w",stdout);
    #endif
    while (cin>>s){
        int len = 0;
        while (s[len]!='\0') ++len;
        root = new trie();
        cin>>n;
        while (n--){
            cin>>w;
            root->addWord(w);
        }
        dp = vector<int>(len+1, 0);
        for (int i=0;i<len;i++){
            int res = root->findWord(s, 0, i);
            if (res==1) dp[i] = 1;
            if (res==-1) break;
        }
        for (int i=1;i<len;++i){
            if (dp[i-1]>0){
                for (int j=i;j<len;++j){
                    int res = root->findWord(s, i, j);
                    if (res==1) dp[j] = (dp[j]+dp[i-1])%MODN;
                    if (res==-1) break;
                }
            }
        }
        cout<<"Case "<<++ct<<": "<<dp[len-1]<<endl;
    }

    return EXIT_SUCCESS;
} 