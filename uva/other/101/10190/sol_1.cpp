#include <bits/stdc++.h>
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define MAXN maxn

using namespace std;

signed main(){
    int n, m, tmp, cube;
    while (cin>>n>>m){
        tmp = n; cube = 1;
        if (m<2 || n<2) {
            cout<<"Boring!"<<endl; cube = 0; continue;
        }
        vector<int> vec; vec.push_back(n);
        while (tmp!=1){
            if (tmp%m){
                cout<<"Boring!"; cube = 0; break;
            }
            vec.push_back(tmp/m);
            tmp/=m;
        }
        if (cube) {
            for (int i=0;i<vec.size();i++) {
                cout<<vec[i];
                if (i!=vec.size()-1) cout<<' ';
            }
        }
        cout<<endl;
    }
	return 0;
}