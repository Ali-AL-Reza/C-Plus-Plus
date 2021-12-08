#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll vis[100000];
int ans=1;
int main()
{
         ll n;
         cin>>n;
         for(int i=2;i<=n+1;i++)vis[i]=1;
         for(int i=2;i<=n+1;i++){
                  for(int j=2*i;j<=n+1;j=j+i){
                           ans=2;
                           vis[j]=2;
                  }
         }
         cout<<ans<<endl;
         for(int i=2;i<=n+1;i++){
                  cout<<vis[i]<<" ";
         }
         cout<<endl;

}
