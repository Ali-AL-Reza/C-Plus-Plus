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
bool check(lli n)
{
         lli sum=0;
         while(n>0)
         {
                  sum=sum+n%10;
                  n=n/10;
         }
         if(sum==10)return true;
         else return false;
}
int main()
{
          int n;
          cin>>n;
          lli ans=18;
          while(n)
          {
                   ans++;
                   if(check(ans))n--;
          }
          cout<<ans<<endl;
}

