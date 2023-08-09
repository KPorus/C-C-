#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int start,end;
    vector<vector<int>> arr;
    for(int i  =0 ;i < n; i++)
    {
        cin>>start>>end;
        arr.push_back({start,end});
    }
    sort (arr.begin(), arr.end(),[&](vector<int> &a, vector<int> &b){
        return a[1] < b[1];
    });
    int take  = 1;
    int endV = arr[0][1];
    for(int i  = 1; i <n;i++)
    {
        if(arr[i][0]>=endV)
        {
            take++;
            endV = arr[i][1];
        }
    }
    cout<<take<<"\n";
    return 0;
}
