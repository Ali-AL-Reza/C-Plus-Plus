#include<bits/stdc++.h>
#define lli long long int
#define inf 100000000
#define mod 1000000007
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
using namespace std;
int ar[50][50],dp[50][50];
int main()
{
         int n,m;
         cin>>n>>m;
         REP1(i,n)REP1(j,m)cin>>ar[i][j];

         REP1(i,m+1)dp[i][m+1]=inf;
         REP1(i,n+1)dp[n+1][i]=inf;

         dp[n+1][m]=dp[n][m+1]=0;

         for(int i=n;i>=1;i--)
         {
                  for(int j=m;j>=1;j--)
                  {
                           dp[i][j]=ar[i][j]+min(dp[i+1][j],dp[i][j+1]);
                  }
         }
         REP1(i,n)
         {
                  REP1(j,m)cout<<dp[i][j]<<" ";
                  cout<<endl;
         }



}
