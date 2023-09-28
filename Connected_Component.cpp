#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int N;
vector<bool> visited(N+1,false);
void DFS(int u,vector<vector<int>> &adj)
{
    visited[u] = true;
    for(int v: adj[u])
    {
        if(!visited[v])
        {
            DFS(v, adj);
        }
    }
}
void BFS(int u, vector<vector<int>> &adj)
{
    queue<int> q;
    q.push(u);
    visited[u]= true;
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
            }
        }
    }
}
int main()
{
    int e;
    cin>>N>>e;
    vector <vector<int>> adj(N+1);
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(1,adj);
    int c = 0;
    for(int i = 1; i<=N; i++)
    {
        if(visited[i]) continue;
        BFS(i, adj);
        c++;
    }
    cout<<"Number of Components: "<<c+1<<"\n";
    return 0;
}