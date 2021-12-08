#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define mod 1000000007
#define pb push_back
using namespace std;
vector<int>ar[N];
bool vis[N];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
lli sumF(lli n)
{
    lli sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
         lli n;
         cin>>n;
         lli sum=sumF(n);
         lli sump=0;
         for(lli i=2;i<=n;i++)
         {
             if(n%i==0)
             {
                 while(n%i==0)
                 {
                     ///cout<<i<<endl;
                     lli p=sumF(i);
                     ///cout<<p<<endl;
                     sump=sump+p;
                    /// cout<<sump<<endl;
                     ///cout<<sump<<endl;
                     n=n/i;
                 }
             }
         }
        // cout<<sum<<" "<<sump<<endl;
         if(sum==sump)cout<<1<<endl;
         else cout<<0<<endl;
}
