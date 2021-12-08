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
                   int dp[m+1]={0};
                   dp[0]=true;
                   for(int i=1;i<=n;i++)cin>>ar[i];

                   for(int i=1;i<=n;i++)
                   {
                            int cur_ele=ar[i];
                            for(int j=m;j>=cur_ele;j--)
                            {
                                     if(dp[j]!=0 || dp[j-cur_ele]==0)continue;
                                     else dp[j]=cur_ele;
                            }
                   }

                   if(dp[m]==0)cout<<-1<<endl;
                   else
                   {
                            int cur_sum=m;
                            while(cur_sum>0){
                                    cout<<dp[cur_sum]<<" ";
                                    cur_sum=cur_sum-dp[cur_sum];
                            }
                            cout<<endl;
                   }

         }
}
/***
3
4 12
2 5 3 4

4 1
2 5 3 4





***/


