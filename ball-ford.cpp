#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    int n, e, s, q;
    cin >> n >> e;
    vector<Edge> v;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }
    int dis[n + 1];
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[1] = 0;
    bool cycle = false;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;
            if (dis[a] != INT_MAX && dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }

    for (int j = 0; j < v.size(); j++)
    {
        Edge ed = v[j];
        int a = ed.u;
        int b = ed.v;
        int w = ed.w;
        if (dis[a] + w < dis[b])
        {
            cycle = true;
            break;
        }
    }

    cin >> s >> q;
    if (!cycle)
    {
        vector<bool> reachable(n + 1, false);
        reachable[s] = true;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                Edge ed = v[j];
                int a = ed.u;
                int b = ed.v;
                int w = ed.w;
                if (reachable[a])
                {
                    reachable[b] = true;
                    // cout<<"dist "<< b <<" "<<"source "<< a <<"\n";
                }
                // cout << "dist " << b << " "
                //      << "source " << a << "\n";
            }
        }

        while (q--)
        {
            int d;
            cin >> d;
            if (!reachable[d])
            {
                cout << "Not Possible" << endl;
            }
            else if (dis[d] == INT_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                // cout << "result: " << dis[d] << endl;
                cout <<dis[d] << endl;
            }
        }
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }

    return 0;
}