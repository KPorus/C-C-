#include <iostream>
#include <vector>
using namespace std;

const int INF = 1e5 + 5 ;
vector<bool> visited(INF,false);
// vector<int> adj[INF];

vector<int> depth(INF,0);
vector<int> height(INF, 0);
void dfs(int a, vector<vector<int>>& graph)
{
    visited[a] = true;
    for(int v:graph[a])
    {
        if(!visited[v])
        {
            depth[v] = depth[a] + 1;
            dfs(v, graph);
            height[a] = max(height[a], height[v]);
        }
        
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> graph(n + 1);
    while (e--)
    {
        int a, b;
        cin >> a >> b ;
        graph[a].push_back(b); // only use for directed graph
        graph[b].push_back(a); // use for undirected graph
    }
    dfs(1,graph);
    //depth print 
    for(int i = 1; i<=n;i++)
    {
        cout<<"Depth of node "<<i<<": "<<depth[i]<<"\n";
        cout<<"********************\n";
        cout << "Height of node " << i << ": " << height[i] << "\n";
    }
    return 0;
}