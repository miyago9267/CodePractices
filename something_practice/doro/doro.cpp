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

signed main(){
    //IO;
    #ifdef DEBUG
		cout<<"\033[1;1;31mDebug outputing..."<<endl;
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    srand(time(NULL));
    string s;
    vector<string> suid = {"黑桃", "紅心", "方塊", "梅花"};
    map<int, string> i2p = {{11, "J"}, {12, "Q"},{13, "K"},{1, "A"},{10, "10"},{9, "9"},{8, "8"},{7, "7"},{6, "6"},{5, "5"},{4, "4"},{3, "3"},{2, "2"}};
    map<int, int> sc = {{11, 1},{12, 2},{13, 3},{1,4}};
    while (cin>>s){
        int n=0;
        vector<int> cards(52), pt(4, 0);
        generate(cards.begin(),cards.end(), [&n] { return n++;});
        for (auto &card:cards){
           int rng = rand()%52;
           swap(card, cards[rng]);
        }
        int ct=0;
        for (auto n:cards){
            int su=n/13, num=n%13+1, who=ct/13;
            if (!(ct%13)) cout<<char(who+'A')<<":"<<endl;
            cout<<suid[su]<<' '<<i2p[num]<<endl;
            pt[who]+=sc[num];
            if ((ct++)%13==12) {
                cout<<char(who+'A')<<" got "<<pt[who]<<" point"<<endl;
            }
        }
    }

    return EXIT_SUCCESS;
}
