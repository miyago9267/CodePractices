class Solution {
    public:
        Solution() {
            n = 1005;
            m = 1005;
            for (int i = 0; i < n; i++) {
                dis[i] = 0x3f3f3f3f;
                vis[i] = 0;
                for (int j = 0; j < n; j++)
                    g[i][j] = 0x3f3f3f3f;
            }
        }
        ~Solution() {}
        void dijstra(int s) {
            dis[s] = 0;
            for (int i = 0; i < n; i++) {
                int x = -1;
                for (int j = 0; j < n; j++) {
                    if (!vis[j] && (x == -1 || dis[j] < dis[x]))
                        x = j;
                }
                vis[x] = 1;
                for (int j = 0; j < n; j++) {
                    if (dis[j] > dis[x] + g[x][j])
                        dis[j] = dis[x] + g[x][j];
                }
            }
        }
    private:
        int n, m;
        int g[1005][1005];
        int dis[1005];
        bool vis[1005];
};