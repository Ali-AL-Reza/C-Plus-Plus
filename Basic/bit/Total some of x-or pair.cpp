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
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                  int ar[1000];
                  int n,res=0;
                  cin>>n;
                  for(int i=1;i<=n;i++)cin>>ar[i];

                  for(int i=0;i<=31;i++)
                  {
                           int cnt0=0,cnt1=0;
                           for(int j=1;j<=n;j++)
                           {
                                    if(ar[j] & (1<<i))cnt1++;
                                    else cnt0++;
                           }
                           int count=cnt0*cnt1;
                           res=res+(1<<i)*count;
                  }
                  cout<<res<<endl;
         }
}

