typedef long long ll;

class Solution {
    public:
        Solution() {
            fa = new ll[100005];
            for (int i = 0; i < 100005; i++)
                fa[i] = i;
        }
        ~Solution() {}

        void Union(int x, int y) {
            int fx = Find(x), fy = Find(y);
            if (fx != fy)
                fa[fx] = fy;
        }
        int Find(int x) {
            return fa[x] == x? x : fa[x] = Find(fa[x]);
        }
    private:
        ll *fa;
};