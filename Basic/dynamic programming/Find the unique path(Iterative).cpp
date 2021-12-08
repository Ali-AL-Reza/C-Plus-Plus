#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
int dp[101][101];
using namespace std;
int main()
{
         int n,m;
         cin>>n>>m;
         for(int i=1;i<=m;i++)dp[n][i]=1;
         for(int i=1;i<=n;i++)dp[i][m]=1;

         for(int i=n-1;i>=1;i--)
         {
                  for(int j=m-1;j>=1;j--)
                  {
                           dp[i][j]=dp[i+1][j]+dp[i][j+1];
                  }
         }
         REP1(i,n)
         {
                  REP1(j,m)cout<<dp[i][j]<<" ";
                  cout<<endl;
         }
}
