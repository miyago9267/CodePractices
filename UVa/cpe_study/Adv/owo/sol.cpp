// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN 15005
#define MOD modn
#define ll long long

using namespace std;

string s[MAXN];
set<string> r;
vector<int> cnt(26, 0), cnt2(26, 0),  notclear(MAXN);

class tries{
    public:
        class node{
            public:
                bool end;
                vector<int> label;
                node *next[26] = {nullptr};
                node(){}
            };
        tries(){
            root = new node();
        }
        void insertTrie(vector<int> word, int lab){
            node *ite = root;
            for (auto c:word){
                if (ite->next[c] == nullptr)
                    ite->next[c] = new node();
                ite = ite->next[c];
            }
            ite->end = true;
            ite->label.push_back(lab);
        }
        void deleteTrie(vector<int> word) {
            node *p = root;
            for (auto c:word){
                if(p->next[c] == nullptr)
                    return;
                p = p->next[c];
            }
            for(auto it:p->label)
                notclear[it] = 1;
            p->label.clear();
        }

        void dfsfind(node *p) {
            int i;
            for(i = 0; i < 11; i++)
                if(p->next[i] != NULL)
                    dfsfind(p->next[i]);
            if(p->label.size() == 1)
                r.insert(s[p->label[0]]);
        }
        
    private:
        node *root;

};

tries t;

void find(int idx, int targ){
    if(idx == 26) {
        if(targ)
            t.deleteTrie(cnt2);
        return ;
    }
    for(auto ct=0; ct<cnt[idx]; ct++){
        cnt2[idx] = ct;
        find(idx+1, targ|(ct != cnt[idx]));
    }
}

signed main(){
    IO;
    #ifdef DEBUG
		cout<<"\033[1;1;31mDebug output"<<endl;
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    
    int n = 0;
    while (cin>>s[0]){
        cnt.clear();
        for (auto c:s[0])
            cnt[c-'a']++;
        t.insertTrie(cnt, n);
        ++n;
    }
    for (auto st:s){
        if (!notclear[n]){
            cnt.clear();
            for (auto c:st){
                cnt[c-'a']++;
            }
            find(0, 0);
        }
    }


    return EXIT_SUCCESS;
}
