// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#pragma GCC optimize("O1")
#pragma GCC optimize("O2")
#pragma GCC optimize("O3")
#define endl "\n"
#define endll "\n\n"
#define pb emplace_back
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.sync_with_stdio(0)
#define ll long long
#define MAXN 25
#define MODN modn

using namespace std;

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    /*
        if x = a or b, then the function will be (x-a)(x-b)
        = x(x-a)-b(x-a) = x^2 -ax-bx + (-a*-b) 
        = x^2 - (a+b)x + ab
        [1] => [1, -a] => [1, -a-b, (a*b)]
    */
    int n, x;
    while (cin>>n){
        vector<ll> c = {1}, tmp;
        // 模擬十字交乘
        for (auto ct=0;ct<n;ct++){
            cin>>x;
            tmp = c; // 把C複製一份
            c.push_back(0); // 把C往後推一位 (*x會加次項)
            for (auto &e:tmp) e*=-x; // 把tmp裡面的係數全部乘以解(記得他是負的)
            for (auto i=1;i<c.size();i++) c[i]+=tmp[i-1]; // 把tmp裡面的係數加回去C裡面 不要加錯格
        }
        // 把每一次項輸出
        for (auto i=0;i<c.size()-1;i++){
            if (!c[i]) continue; // 係數0就不要理他
            if (i) cout<<(c[i]>=0?" + ":" - "); // 前面加上符號
            if (abs(c[i])!=1) cout<<abs(c[i]); // 係數是1不用特別輸出
            if (1) cout<<"x"; // 把x弄出來(if完全沒用 因為前後都有這行沒有很奇怪)
            if (c.size()-i-1!=1) cout<<"^"<<c.size()-i-1; // 加上次方
        }
        // 尾巴的常數規定一定要輸出(即使為0) 然後的尾巴=0
        cout<<(c.back()>=0?" + ":" - ")<<abs(c.back())<<" = 0"<<endl; // 最後一項 然後加上等於0
    }
    return EXIT_SUCCESS;
}
