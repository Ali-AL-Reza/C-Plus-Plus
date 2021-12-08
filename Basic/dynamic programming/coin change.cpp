#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define inf 10000000
#define lli long long int
using namespace std;

int coinchange(vector<int>& v, int sum)
{
         int dp[sum+1];
         dp[0]=0;
         for(int i=1;i<=sum;i++)dp[i]=inf;

         for(int i=1;i<=sum;i++)
         {
                  int ans=inf;
                  for(int j=0;j<v.size();j++)
                  {
                           if(v[j]<=i)ans=min(ans,dp[i-v[j]]);
                  }
                  if(ans==inf)dp[i]=inf;
                  else dp[i]=ans+1;
         }
         if(dp[sum]==inf)return -1;
         return dp[sum];
}

int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                  int coins;
                  cin>>coins;
                  vector<int>v(coins);
                  REP(i,coins)cin>>v[i];
                  int sum;
                  cin>>sum;
                  cout<<coinchange(v,sum)<<endl;
         }
}
