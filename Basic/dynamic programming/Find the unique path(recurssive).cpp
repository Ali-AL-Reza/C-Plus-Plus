#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
int dp[101][101];
char ar[100];
using namespace std;
int n,m;
int fill(int x,int y)
{
         if(x<1 || x>n || y<1 || y>m)return 0;

         if(x==n && y==m)
         {
                  dp[x][y]=1;
                  return 1;
         }
         if(dp[x][y]!=-1)return dp[x][y];

         dp[x][y]=fill(x+1,y)+fill(x,y+1);

         return dp[x][y];
}
int main()
{
         cin>>n>>m;
         memset(dp,-1,sizeof dp);

         fill(1,1);

         REP1(i,n)
         {
                  REP1(j,m)cout<<dp[i][j]<<" ";
                  cout<<endl;
         }

}
