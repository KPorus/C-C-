/*
Shortest distance of node from soruce to distination of undireacted graph using BFS
*/

#include<iostream>
#include<vector>
#include<queue>
#include <algorithm>
using namespace std;
const int INF = 1e3+5;
int N;
int level[INF];
int parent[INF];
vector<bool> visited(N+1);
void bfs(int u, vector<vector<int>> &adj)
{
    queue<int>q;
    q.push(u);
    visited[u] = true;
    level[u] = 0;
    parent[u] = -1;
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
                level[v] = level[s]+1;
                parent[v] = s;
            }
        }
    }
}
int main()
{
    int e;
    cin>>N>>e;
    vector<vector<int>> adj(N+1);
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s,d;
    cin>>s>>d;
    bfs(s,adj);
    cout<<"distance from source "<<s<<" to "<<d<<" is : "<<level[d]<<"\n";
    
    // Time complexity of finding path is O(n);
    vector<int> path;
    int current = d;
    while(current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }

    reverse(path.begin(),path.end());
    cout<<"Path: ";
    for(int node:path)
    {
        cout<<node<<" ";
    }
    return 0;
}