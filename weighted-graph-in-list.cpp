#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<pair<int, int>>> graph(n + 1);
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        graph[a].push_back({b, w}); // only use for directed graph
        graph[b].push_back({a, w}); // use for undirected graph
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "NODE LIST " << i << ": ";
        for (pair<int, int> j : graph[i]) // auto j:graph[i]
        {
            cout << "(" << j.first << ", " << j.second << ") ";
        }
        cout << "\n";
    }
    return 0;
}