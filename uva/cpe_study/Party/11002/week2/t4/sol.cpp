#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

using namespace std;

vector<vector<int>> db(105, vector<int> (25, 0)); 
vector<int> pri;
map<int, int> p2i;

void init() {
    int ct = 0;
    // prime table
    for(int i=2;i<=105;i++) {
        bool isPri=1;
        for(int j=2;j*j<=i;j++) if(!(i%j)) isPri=0;
        if(isPri) {
            p2i[i]=ct++;
            pri.push_back(i);
        }
    }
    
    // query table
    for (auto i=1;i<=100;i++){
        db[i] = db[i-1];
        int tmp = i;
        for (auto e:pri){
            while (!(tmp%e)){
                db[i][p2i[e]]++;
                tmp/=e;
            }
        }
    }
}

signed main() {
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    init();
    int n;
    while (cin>>n && n){
        vector<int> tmp; int f=0;
        for (auto i=24;i>-1;i--){
            if (!f&&!db[n][i]) continue;
            else {
                f=1;
                tmp.insert(tmp.begin(), db[n][i]);
            }
        }
        cout<<setw(3)<<n<<"! =";
        int el=0, fir = 0;
        for (auto e:tmp) {
            if (!(el++%15)&&fir) cout<<endl<<"      ";
            cout<<setw(3)<<e;
            fir = 1;
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}