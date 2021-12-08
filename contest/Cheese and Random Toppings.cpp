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
lli nCk(lli n,lli k,lli m)
{
         lli ans=1;
         if(k>n-k)k=n-k;
         for(int i=0;i<k;i++)
         {
                  ans=(ans*(n-i));
                  ans=(ans/(i+1));
         }
         return ans%m;
}
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
             lli n,k,m;
             cin>>n>>k>>m;
             lli ans=nCk(n,k,m);
             cout<<ans<<endl;
         }
}
