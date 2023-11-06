#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;
typedef pair<int, int> pii;
const int INF = 1e3 + 5;
vector<vector<pii>> graph(INF);
vector<bool> vis(INF, false);
vector<int> dis(INF, INF); // Initialize dis[] with INF
vector<int> parent(INF);
int cost = 0;

void primsMST(int u)
{
    set<pii> s; // Use set of pairs (distance, node)
    dis[u] = 0;
    s.insert({0, u});

    while (!s.empty())
    {
        auto z = *(s.begin());
        vis[z.second] = true;
        int w = z.first;
        int u = z.second;
        cost += w;
        s.erase(z);

        for (auto it : graph[u])
        {
            int v = it.first;
            int weight = it.second;

            if (vis[v])
            {
                continue;
            }

            if (dis[v] > weight)
            {
                s.erase({dis[v], v});
                dis[v] = weight;
                s.insert({dis[v], v});
                parent[v] = u;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        graph[a].push_back({b, w});
        graph[b].push_back({a, w});
    }

    primsMST(0);
    cout << cost << endl;

    return 0;
}
