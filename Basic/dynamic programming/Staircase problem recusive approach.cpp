#include<bits/stdc++.h>
#define REP(i,n) for(int i=1;i<=n;i++)
#define N 1000001
#define ll long long int
ll mod =1e9+7;
using namespace std;
int dp[N];
void init()
{
         REP(i,N)dp[i]=-1;
}
int stairs(int n)
{
         if(n<=2)return n;
         if(dp[n]!=-1) return dp[n];
         dp[n]=(stairs(n-1)+stairs(n-2));
         return dp[n];
}
int main()
{
         init();
         int t;
         cin>>t;
         while(t--){
                  int n;
                  cin>>n;
                  cout<<stairs(n)<<endl;
         }
}
