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
lli power(lli a,lli n,lli m)
{
         lli res=1;
        /// a=a%m;
         while(n)
         {
                  if(n%2)
                  {
                           res=(res*a)%m;
                           n--;
                  }
                  else
                  {
                           a=(a*a)%m;
                           n=n/2;
                  }
         }
         return res%m;
}
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
             lli n,m;
             cin>>n>>m;
             if(n==0)
             {
                 cout<<"YES"<<endl;
                 continue;
             }
             lli ans=power(n,(m-1)/2,m);
             if(ans==1)cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
         }
}
