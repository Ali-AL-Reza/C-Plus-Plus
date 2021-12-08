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
int col[N];
bool dfs(int v, int c)
{
         vis[v]=1;
         col[v]=c;
         for(int i=0;i<ar[v].size();i++)
         {
                  int child=ar[v][i];
                  if(!vis[child])
                  {
                           bool res=dfs(child,c^1);
                           if(res==false)return false;
                  }
                  else
                  {
                           if(col[child]==col[v])return false;
                  }
         }
         return true;
}
int main()
{
         int n,m,a,b;
         cin>>n>>m;
         for(int i=1;i<=m;i++)cin>>a>>b, ar[a].pb(b), ar[b].pb(a);

         if(dfs(1,1))cout<<"IT is Bipartite Graph"<<endl;
         else cout<<"It's not Bipartite Graph"<<endl;

         for(int i=1;i<=n;i++)cout<<col[i]<<" ";
         cout<<endl;

}
/**
  6 6
  1 6
  1 2
  5 6
  5 4
  3 4
  3 2

**/


