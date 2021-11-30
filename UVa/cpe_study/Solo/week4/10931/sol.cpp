#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

vector<int> int2bin(int i){
    vector<int> bin;
    int ct = 0;
    while (i > 0){
        bin.push_back(i % 2);
        i /= 2;
    }
    reverse(bin.begin(),bin.end());
    return bin;
}

int int2par(vector<int> *v){
    int c = 0;
    for (auto &e:*v){
        if (e == 1) c++;
    }
    return c;
}

signed main(){
    int i;
    while (cin>>i && i!=0){
        auto B = int2bin(i); int P = int2par(&B);
        cout<<"The parity of ";
        for (int i:B) cout<<i;
        cout<<" is "<<P<<" (mod 2)."<<endl;
    }
    return 0;
}
