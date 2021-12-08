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
                   bool dp[m+1]={0};
                   dp[0]=true;
                   for(int i=1;i<=n;i++)cin>>ar[i];

                   for(int i=1;i<=n;i++)
                   {
                            int cur_ele=ar[i];
                            for(int j=m;j>=cur_ele;j--)
                            {
                                     if(dp[j]==true || dp[j-cur_ele]==0)continue;
                                     else dp[j]=true;
                            }
                   }
                   if(dp[m]==true)cout<<"YES"<<endl;
                   else cout<<"NO"<<endl;
         }
}
/***
3
4 12
2 5 3 4

4 1
2 5 3 4





***/

