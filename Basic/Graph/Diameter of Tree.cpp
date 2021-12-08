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
int  maxD,max_node;
void dfs(int node, int d)
{
         vis[node]=1;
         if(d>maxD)maxD=d,max_node=node;
         for(int i=0;i<ar[node].size();i++)
         {
                  int child=ar[node][i];
                  if(!vis[child])dfs(child,d+1);
         }
}
int main()
{
         int n,m,a,b;
         cin>>n;///its tree n=m-1
         REP1(i,n-1)cin>>a>>b, ar[a].pb(b), ar[b].pb(a);

         maxD=-1;
         dfs(1,0);

         REP1(i,n)vis[i]=0;
         maxD=-1;

         dfs(max_node,0);
         cout<<maxD<<endl;


}


