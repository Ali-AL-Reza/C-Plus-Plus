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
int dist[N];
void dfs(int node,int d)
{
         vis[node]=1;
         dist[node]=d;
         for(int i=0;i<ar[node].size();i++)
         {
                  int child=ar[node][i];
                  if(vis[child]==0)dfs(child,dist[node]+1);
         }
}
int main()
{
         int n,m,a,b;
         cin>>n;
         for(int i=1;i<n;i++)cin>>a>>b, ar[a].pb(b), ar[b].pb(a);

         dfs(1,0);
         cin>>m;
         int min_dis=inf,ans=-1;
         while(m--)
         {
                  int go_city;
                  cin>>go_city;
                  if(dist[go_city]<min_dis)min_dis=dist[go_city],ans=go_city;
                  else
                  {
                           if(dist[go_city]==min_dis && go_city<ans)ans=go_city;
                  }
         }
         cout<<ans<<endl;


}
/**
  6
  1 2
  1 3
  1 4
  2 5
  2 6
  4
  5
  6
  3
  4
**/

