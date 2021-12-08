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
lli gcd(lli a,lli b)
{
         if(b==0)return a;
         else return gcd(b,a%b);
}
int main()
{
         lli n, k;
         cin>>n>>k;
         lli ans=1;
         while(k--)ans=ans*10;
         cout<<(ans*n)/gcd(n,ans)<<endl;
}

