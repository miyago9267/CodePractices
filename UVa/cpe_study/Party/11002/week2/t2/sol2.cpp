#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

using namespace std;

signed main(){
    //IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    int ct=2;
    vector <int> prime;
    vector <int> pc(1005, 0);
    prime.clear();
    prime.push_back(1);
    prime.push_back(2);
    pc[1]=1;
    pc[2]=2;
    for(int i=3;i<=1000;i++){
        bool prime_c=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                prime_c=false;
                break;
            }
        }
        if(prime_c==true){
            ct++;
            prime.push_back(i);
        }
        pc[i]=ct;
    }
    int n,c;
    //for (auto e:pc) cout<<e<<' ';
    while(cin>>n>>c){
        cout<<n<<' '<<c<<":";
        if(floor(pc[n]/2)<c){
                for(int i=0;i<pc[n];i++) cout<<' '<<prime[i];
        }
        else{
            for (auto i=floor((pc[n]+1)/2)-c;i<floor(pc[n]/2)+c;i++){
                cout<<' '<<prime[i];
                    
            }
        }
        cout<<endl<<endl;
    }
    return EXIT_SUCCESS;
}