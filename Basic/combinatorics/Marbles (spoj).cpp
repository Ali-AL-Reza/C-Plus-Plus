#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(iint i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
lli nCk(int n,int k)
{
         lli ans=1;
         if(k>n-k)k=n-k;
         for(int i=0;i<k;i++)
         {
                  ans=(ans*(n-i));
                  ans=(ans/(i+1));
         }
         return ans;
}
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                  int n,k;
                  cin>>n>>k;
                 lli ans= nCk(n-1,k-1);
                 cout<<ans<<endl;
         }
}
