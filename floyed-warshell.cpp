#include <iostream>
using namespace std;
const int INF = 1e9+5; // Increase INF to handle the given constraints

int main()
{
    int n, e, s, t;
    cin >> n >> e;

    int dis[n + 1][n + 1];

    // Initialize the dis array with INF
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dis[i][j] = (i == j) ? 0 : INF;
        }
    }

    int a, b, w;
    // Build the adjacency matrix
    while (e--)
    {
        cin >> a >> b >> w;
        dis[a][b] = w;
    }

    // Floyd-Warshall algorithm
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][k] != INF && dis[k][j] != INF)
                {
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                }
            }
        }
    }

    // Check for negative cycles
    for (int i = 1; i <= n; i++)
    {
        if (dis[i][i] < 0)
        {
            cout << "Negative Cycle Detected" << endl;
            return 0;
        }
    }

    cin >> s >> t;
    while (t--)
    {
        int d;
        cin >> d;
        if (dis[s][d] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[s][d] << endl;
        }
    }
    return 0;
}
