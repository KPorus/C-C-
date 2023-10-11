#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int, int> pii;
const int INF = 1e3 + 5;
vector<pii> adj[INF];
vector<bool> visited(INF,false);
vector<int> dist(INF);
void dijkstra(int u)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[u] = 0;
    pq.push({dist[u], u});

    while (!pq.empty())
    {
        int s = pq.top().second;
        pq.pop();
        visited[s] = true;
        for(pii q:adj[s])
        {
            int v = q.first;
            int w = q.second;
            if(!visited[v])
            {
                if(dist[v]>dist[s] + w)
                {
                    dist[v] = dist[s] + w;
                    pq.push({dist[v],v});
                }
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
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    dijkstra(1);

    for(int i = 1; i<=n;i++)
    {
        cout<<"Distance of node "<<i<<" : "<< dist[i]<<"\n";
    }
    return 0;
}
