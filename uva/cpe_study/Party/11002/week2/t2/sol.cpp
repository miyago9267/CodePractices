#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define endll "\n\n"

using namespace std;

vector <int> prime(2); 
vector <int> pc(1005, 0);

void init(){
    prime[0] = 1; prime[1] = 2;
    pc[1] = 1; pc[2] = 2;
    int ct=2;
    for(int i=3;i<=1000;i++){
        bool isPri=1;
        for(int j=2;j*j<=i;j++){
            if(!(i%j)){
                isPri=0;
                break;
            }
        }
        if(isPri){
            ct++;
            prime.push_back(i);
        }
        pc[i]=ct;
    }
}

signed main(){
    //IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif  
    init(); 
    int n,c;
    while(cin>>n>>c){
        cout<<n<<' '<<c<<":";
        if(floor(pc[n]/2)<c){
            for(int i=0;i<pc[n];i++) cout<<' '<<prime[i];
        }
        else{
            for (auto i=floor((pc[n]+1)/2)-c;i<floor(pc[n]/2)+c;i++) cout<<' '<<prime[i];
        }
        cout<<endll;
    }
    return EXIT_SUCCESS;
}