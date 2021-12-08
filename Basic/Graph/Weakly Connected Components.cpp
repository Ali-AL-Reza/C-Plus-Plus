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


void dfs(int node)
{
         vis[node]=1;
         /**for(int i=0;i<ar[node].size();i++)
         {
                  int child=ar[node][i];
                  if(vis[child]==0)dfs(child);
         }**/
         for(int child : ar[node])
         {
                  if(!vis[child])dfs(child);
         }
}
int main()
{
         int n,m,a,b;
         cin>>n>>m;
         for(int i=1;i<=m;i++)
         {
                  cin>>a>>b;
                  ar[a].pb(b);
                  ar[b].pb(a);
         }
         int cc=0;
         for(int i=1;i<=n;i++)
         {
                  if(vis[i]==0)
                  {
                           dfs(i);
                           cc++;
                  }
         }
         cout<<"Total Connected Components are:"<<cc<<endl;
}

