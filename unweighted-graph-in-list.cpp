#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> graph(n + 1);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b); // only use for directed graph
        graph[b].push_back(a); // use for undirected graph
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "NODE LIST " << i << ": ";
        for (int j : graph[i])
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
