#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll "\n\n"

using namespace std;

string mp = "01SE#Z##8########A###3##HIL#JM#O###2TUVWXY5";
vector<vector<string>> res={
    {"not a palindrome.", "a mirrored string."},
    {"a regular palindrome." ,"a mirrored palindrome."}
};

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    string s;
    while (cin>>s){
        int len = s.length();
        bool pal = 1, mir = 1;
        if (s.length()&1 && mp[s[(len-1)/2]-48]!=s[(len-1)/2]) mir=0;
        for (auto i=0;i<(len)/2;i++){
            if (s[i]!=s[len-i-1]) pal = 0;
            if (s[i]!=mp[s[len-i-1]-48]) mir = 0;
        }
        cout<<s<<" -- is "<<res[pal][mir]<<endll;
    }
    return EXIT_SUCCESS;
}