#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
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
                 int n,x;
                 cin>>n>>x;
                 vector<int>v(n+1);
                 v[0]=0;
                 for(int i=1;i<=n;i++)
                 {
                          int a;
                          cin>>a;
                          v[i]=v[i-1]+a;
                 }
                 ///bool flag=false;
                 int ans=0;
                 int count=0;
                 for(int i=0;i<n;i++)
                 {
                          if(v[i]==0 && i!=0)
                          {
                                   count++;
                                   continue;
                          }
                          if((v[n]-v[i])%x!=0)
                          {
                                  /// flag=true;
                                   ans=n-i;
                                   break;
                          }
                 }

                 if(ans)cout<<ans+count<<endl;
                 else cout<<-1<<endl;
         }
}

