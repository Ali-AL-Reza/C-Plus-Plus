#include<bits/stdc++.h>
typedef long long ll;
#define N 1000001
int mod =1000000007;
ll dp[N];
using namespace std;

void init()
{
         dp[1]=1;
         dp[2]=2;
         dp[3]=4;
         for(int i=4;i<=100000;i++){
                  dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])% mod;
         }
}

int main()
{
         init();
         int t;
         cin>>t;
         while(t--){
                  int n;
                  cin>>n;
                  cout<<dp[n]<<endl;
         }
         return 0;
}

