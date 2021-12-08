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
int in[N],out[N];
int timer=0;
void dfs(int node)
{
         vis[node]=1;
         in[node]=timer++;
         for(int i=0;i<ar[node].size();i++)
         {
                  int child=ar[node][i];
                  if(!vis[child])dfs(child);
         }
         out[node]=timer++;
}
int main()
{
         int n,m,a,b;
         cin>>n>>m;
         for(int i=1;i<=m;i++)cin>>a>>b, ar[a].pb(b), ar[b].pb(a);

         int node,subnode;
         cin>>node>>subnode;
         dfs(1);
         if(in[node]<in[subnode] && out[node]>out[subnode])cout<<subnode<<" Is as subnode of "<<node;
         else cout<<subnode<<" is not subnode of "<<node<<endl;
}
/**
5 4
1 2
2 3
2 4
4 5


**/

