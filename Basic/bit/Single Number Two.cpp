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

                  int n;
                  cin>>n;
                  vector<int>ar(n);
                  for(int i=0;i<n;i++)cin>>ar[i];

                  /**vector<int>f(32,0);
                  for(int j=0;j<n;j++)
                  {
                           for(int i=0;i<32;i++)
                           {
                                    if(ar[j] & (1<<i))f[i]++;
                           }
                  }
                  int res=0;
                  for(int i=0;i<32;i++)
                  {
                           if(f[i]%3==1)res=res+(1<<i);
                  }
                  cout<<res<<endl;**/
                  sort(ar.begin(),ar.end());
                  if(ar[1]!=ar[0])cout<<ar[0]<<endl;
                  else if(ar[n-1]!=ar[n-2])cout<<ar[n-1]<<endl;
                  else
                  {
                           for(int i=1;i<n;i=i+3)
                           {
                                    if(ar[i]!=ar[i-1])
                                    {
                                             cout<<ar[i-1]<<endl;
                                             break;
                                    }
                           }
                  }
         }
}

