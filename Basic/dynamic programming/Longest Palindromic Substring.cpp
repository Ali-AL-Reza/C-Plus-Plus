#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
int dp[101][101];
char ar[100];
using namespace std;
int main()
{
         int n;
         cin>>n;
         REP1(i,n)cin>>ar[i];

         for(int i=0;i<=n;i++)dp[0][i]=dp[1][i]=1;

         for(int i=2;i<=n;i++)
         {
                  for(int j=i;j<=n;j++)
                  {
                           if(ar[j]==ar[j-i+1] && dp[i-2][j-1]==1)dp[i][j]=1;
                           else dp[i][j]=0;
                  }
         }
         for(int i=0;i<=n;i++)
         {
                  for(int j=0;j<=n;j++)cout<<dp[i][j]<<" ";

                  cout<<endl;
         }
}
