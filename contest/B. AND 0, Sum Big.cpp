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
lli power(lli a,lli n)
{
         lli res=1;
         while(n)
         {
                  if(n%2)
                  {
                           res=(res*a)%p;
                           n--;
                  }
                  else
                  {
                           a=(a*a)%p;
                           n=n/2;
                  }
         }
         return res;
}
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                lli a,n;
                cin>>a>>n;
                cout<<power(a,n)<<endl;
         }
}

