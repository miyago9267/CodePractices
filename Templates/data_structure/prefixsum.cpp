typedef long long ll;

class Solution {
    public:
        Solution() {}
        ~Solution() {}
        /*
            query(L,R) = S[R] - S[L-1]
            @param n: size of the array
            @param a: array
            @return: prefix sum array
        */
        ll* buildPrefix(ll n, ll a[]) {
            pre[0] = 0;
            for(auto i=1; i<=n; i++)
                pre[i]=pre[i-1]+a[i];
        }

        ll prefixsum(ll l, ll r){
            return pre[r]-pre[l-1];
        };
    private:
        ll pre[1000005];
};