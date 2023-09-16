#include <iostream>
#include <vector>
using namespace std;

// const int INF = 1e9 + 5 ;
// vector<int> adj[INF];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> graph(n + 1);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i = 1; i<=n;i++)
    {
        cout<<"NODE LIST "<<i<<": ";
        for(int j:graph[i])
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}