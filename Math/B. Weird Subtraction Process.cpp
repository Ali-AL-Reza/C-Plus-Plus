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
lli a,b;
int main()
{
         lli a,b;
         cin>>a>>b;
         while(a && b)
         {
                  if(a>=2*b)a=a%(2*b);
                  else if(b>=2*a)b=b%(2*a);
                  else break;
         }
         cout<<a<<" "<<b<<endl;
}
