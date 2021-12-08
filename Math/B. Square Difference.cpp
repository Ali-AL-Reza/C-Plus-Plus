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
bool isprime(lli n)
{
         if(n<=1)return false;
         if(n<=3)return true;
         if(n%2==0 or n%3==0)return false;
         for(int i=5;i*i<=n;i=i+2)
         {
                  if(n%i==0)return false;
         }
         return true;
}
int main()
{
         int t;
         ///cin>>t;
         scanf("%d",&t);
         while(t--)
         {
                  lli a,b;
                  ///cin>>a>>b;
                  scanf("%lld%lld",&a,&b);
                  if((a-b)==1 && isprime(a+b))puts("YES");///cout<<"YES"<<endl;
                  else puts("NO");///cout<<"NO"<<endl;

         }
}

