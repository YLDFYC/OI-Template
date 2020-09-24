//:~ @author RLDF
//s: 起始点
//dis: 最短路
//MAXN: 最大点数
inline void dijkstra(int s, int *dis, int *vis, priority_queue<pair<int, int>> &q, vector<int> G[MAXN]) {
    memset(dis, 0x3f, sizeof dis);
    memset(vis, 0, sizeof vis);
    dis[s] = 0;
    q.push({0, s});
    while (q.size()) {
        int x = q.top().second;
        q.pop();
        if (vis[x])
            continue;
        vis[x] = 1;
        for (auto i : G[x]) {
            int y = i.first, w = i.second;
            if (dis[y] > dis[x] + w) {
                dis[y] = dis[x] + w;
                q.push({-dis[y], y});
            }
        }
    }
}
