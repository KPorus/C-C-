#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    int dis[n+1][n+1];
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            dis[i][j] = INT_MAX;
            if(i==j) dis[i][j] = 0;
        }
    }
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        dis[a][b] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<dis[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}