#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll "\n\n"

using namespace std;

vector<int>::iterator findEle(vector<int> &v, int ele){
    return find(v.begin(), v.end(), ele);
}

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    vector<int> x, y;
    int n, m;
    while (cin>>n>>m) {
        if (findEle(x, n)!=x.end()){
            x.erase(findEle(x, n));
        }else x.push_back(n);
        if (findEle(y, m)!=y.end()){
            y.erase(findEle(y, m));
        }else y.push_back(m);
    }
    cout<<x.front()<<" "<<y.front()<<endl;
    return EXIT_SUCCESS;
}