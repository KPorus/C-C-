#include <iostream>
#include <vector>
using namespace std;
int N;
int c;
vector<bool> visited(N + 1, false);

bool DFS(int u, int p, vector<vector<int>> &adj)
{
    bool cycleExist = false;
    visited[u] = true;
    for (int v : adj[u])
    {
        if (v == p)
        {
            continue;
        }
        if (visited[v])
        {
            return true;
        }
        visited[v] = true;
        cycleExist = cycleExist | DFS(v, u, adj);
    }
    return cycleExist;
}
int main()
{
    int e;
    cin >> N >> e;
    vector<vector<int>> adj(N + 1);
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (DFS(1, -1, adj))
    {
        cout << "Cycle detected\n";
    }
    else
    {
        cout << "NO Cycle detected\n";
    }
    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;
// int N;
// int c;
// vector<bool> visited(N+1,false);
// int DFS(int u, vector<vector<int>>&adj)
// {
//     visited[u] = true;
//     for(int v: adj[u])
//     {
//         if(v==u)
//         {
//             continue;
//         }
//         if(visited[v])
//         {
//             c++;
//         }
//         visited[v] = true;
//         DFS(v,adj);
//     }
//     return c;
// }
// int main()
// {
//     int e;
//     cin>>N>>e;
//     vector<vector<int>> adj(N+1);
//     while(e--)
//     {
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v); 
//         adj[v].push_back(u); 
//     }
//     DFS(1,adj);
//     if(c>0)
//     {
//         cout<<"Cycle detected\n";
//         cout<<"Number of cycle: "<<c<<"\n";
//     }
//     else
//     {
//         cout<<"NO Cycle detected\n";
//     }
//     return 0;
// }