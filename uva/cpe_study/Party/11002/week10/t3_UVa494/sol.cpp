#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define IO ios_base::sync_with_stdio;cin.tie(0)
#define ll long long
#define pb push_back
#define MAXN owo
#define MODN owo

using namespace std;

signed main(){
    //IO;
    #ifdef DEBUG
        freopen("p.in", "r", stdin);
        freopen("p.out", "w", stdout);
    #endif

    string s;
    int ct = 0, isWord;
    while(getline(cin, s)){
        ct = 0, isWord = 0;
        for (auto &c:s){
            if (isalpha(c) && !isWord) isWord = 1, ct++;
            else if (!isalpha(c)) isWord = 0;
        }
        cout<<ct<<endl;
    }
}