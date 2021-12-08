#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
#define pb push_back
using namespace std;
vector<int>ar[N];
bool vis[N];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
int main()
{
         int t;
         cin>>t;
         while(t--)
         {

                  int n;
                  cin>>n;
                  vector<int>v(n+1);
                  for(int i=1;i<=n;i++)cin>>v[i];

                  cout<<n/2<<endl;
                  for(int i=1;i<n;i=i+2)
                  {
                           cout<<i<<" "<<i+1<<" "<<min(v[i],v[i+1])<<" "<<p<<endl;
                  }
         }
}
