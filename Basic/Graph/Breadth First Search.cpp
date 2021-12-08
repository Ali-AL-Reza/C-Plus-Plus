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
int dis[N];
void BFS(int node)
{
         queue<int>q;
         q.push(node);
         vis[node]=1;
         dis[node]=0;
         while(!q.empty())
         {
                  int curr_node=q.front();
                  q.pop();
                  for(int i=0;i<ar[curr_node].size();i++)
                  {
                           int child=ar[curr_node][i];
                           if(!vis[child])
                           {
                                    q.push(child);
                                    dis[child]=dis[curr_node]+1;
                                    vis[child]=1;
                           }
                  }
         }
}
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                  int n,m,a,b;
                  cin>>n>>m;
                  REP1(i,n)ar[i].clear(),vis[i]=0;

                  REP1(i,m)cin>>a>>b, ar[a].pb(b),ar[b].pb(a);

                  int source,go_to;
                  cin>>source>>go_to;
                  BFS(source);
                  cout<<dis[go_to]<<endl;

         }
}
/**
8 9
1 2
1 3
1 5
1 7
1 8
2 3
2 4
2 6
6 7

1 6

*/

