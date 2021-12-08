#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(iint i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
using namespace std;
lli gcd(lli a,lli b)
{
         if(b==0)return a;
         else
                  return gcd(b,a%b);
}
lli sum(lli n)
{
         lli res=0;
         while(n)
         {
                  int x=n%10;
                  res=res+x;
                  n=n/10;
         }
         return res;
}
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                  lli n;
                  cin>>n;
                  bool ans=true;
                  while(ans)
                  {
                           lli b=sum(n);
                           lli x= gcd(n,b);
                           if(x>1)
                           {
                                    cout<<n<<endl;
                                    ans=false;
                           }
                           else n++;
                  }
         }
}

