// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

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
        void insertTrie(string word, int lab){
            node *ite = root;
            for (auto c:word){
                int ci = c - 'a';
                if (ite->next[ci] == nullptr)
                    ite->next[ci] = new node();
                ite = ite->next[ci];
            }
            ite->end = true;
            ite->label.push_back(lab);
        }
        
        bool find(string word, int lab){
            node *p = root;
            for (auto c:word){
                int ci = c - 'a';
                if(p->next[ci] == nullptr)
                    return false;
                p = p->next[ci];
            }
            return p->end;
        }

    private:
        node *root;

};

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    return EXIT_SUCCESS;
}
