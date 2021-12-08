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
int in[N],low[N];
int timer;

void dfs(int node, int par)
{
         vis[node]=1;
         in[node]=low[node]=timer++;

         for(int i=0;i<ar[node].size();i++)
         {
                  int child=ar[node][i];
                  if(child==par)continue;
                  if(vis[child]==1)
                  {
                           ///it has back edge
                           low[node]=min(low[node],in[child]);
                  }
                  else
                  {
                           dfs(child,node);
                           if(low[child]>in[node])cout<<node<<"---"<<child<<" is a bridge"<<endl;
                           low[node]=min(low[node],low[child]);
                  }
         }
}
int main()
{
         int n,m,a,b;
         cin>>n>>m;
         REP1(i,m)cin>>a>>b, ar[a].pb(b), ar[b].pb(a);

         dfs(1,-1);
}
/***
4 4
1 2
2 3
3 4
2 4
***/


