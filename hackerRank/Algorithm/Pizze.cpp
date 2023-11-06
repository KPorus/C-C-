#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

const int INF = numeric_limits<int>::max();
const int MAX_LOCATIONS = 50;
vector<pair<int, int>> adj[MAX_LOCATIONS];

vector<int> dijkstra(int shop, int n)
{
    vector<int> dist(n, INF);
    dist[shop] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, shop});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        for (const auto &neighbor : adj[u])
        {
            int v = neighbor.first;
            int w = neighbor.second;

            if (dist[u] != INF && dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b, t;
        cin >> a >> b >> t;
        adj[a].push_back({b, t});
        adj[b].push_back({a, t});
    }

    int pizza_location;
    cin >> pizza_location;

    vector<int> dist = dijkstra(pizza_location, n);

    int total_time = 0;
    for (int i = 0; i < n; i++)
    {
        total_time += dist[i];
    }

    cout << total_time << endl;

    return 0;
}
