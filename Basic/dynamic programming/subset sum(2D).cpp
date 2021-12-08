#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
#define REP(i,n) for(int i=0;i<n;i++)
#define endl '\n'
using namespace std;
int main()
{
         int n,m;
         int t;
         cin>>t;
         while(t--)
         {
                   int ar[100];
                   cin>>n>>m;
                   bool dp[n+1][m+1];
                   for(int i=1;i<=n;i++)cin>>ar[i];
                   dp[0][0]=1;
                   for(int i=1;i<=m;i++)dp[0][i]=0;

                   for(int i=1;i<=n;i++)
                   {
                            for(int j=0;j<=m;j++)
                            {
                                     if(j<ar[i])dp[i-1][j];
                                     else
                                     {
                                              int need=j-ar[i];
                                              if(dp[i-1][j]==1 || dp[i-1][need]==1)dp[i][j]=true;
                                              else dp[i][j]=false;
                                     }
                            }
                   }
                   bool ans=dp[n][m];
                   if(ans==true)cout<<"YES"<<endl;
                   else cout<<"NO"<<endl;
         }
}
