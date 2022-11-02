#include <iostream>
using namespace std;
void solve(){
 
int n;
cin>>n;
 
int a[n];
int count =0;
int count2 =0;
int sum =0;
for(int i =0; i<n; i++){
  cin>>a[i];
  if(a[i]==1) count++;
  else count2++;
  sum+=a[i];
}
 
if(sum%2==1 || count2%2==1 && count==0 ){
  cout<<"NO"<<endl;
}
else cout<<"YES"<<endl;
 
 
 
}
 
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
}