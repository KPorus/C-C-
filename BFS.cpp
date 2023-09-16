#include<iostream>
#include <vector>
#include <queue>
using namespace std;
const int INF = 1e3 + 5;
vector<bool> visited(INF,false);
int level[INF];
void bfs(int u,vector<vector<int>> &adj)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    level[u] = 0;
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        for(int v:adj[s])
        {
            if(!visited[v])
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[s] + 1;
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>> adj(n+1);
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1,adj);
    return 0;
}