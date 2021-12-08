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
bool dfs(int node , int par)
{
         vis[node]=1;
         for(int i=0;i<ar[node].size();i++)
         {
                  int child=ar[node][i];
                  if(!vis[child])
                  {
                           int res=dfs(child,node);
                           if(res==true)return true;
                  }
                  else
                  {
                           if(child!=par)return true;
                  }
         }
         return false;
}
int main()
{
         int n,m,a,b;
         cin>>n>>m;
         for(int i=1;i<=m;i++)cin>>a>>b, ar[a].pb(b),ar[b].pb(a);


         if(dfs(1,0))cout<<"IT has Cycle"<<endl;
         else cout<<"IT has NO Cycle"<<endl;
}
/***
6 6
  1 6
  1 2
  5 6
  5 4
  3 4
  3 2



7 6
1 2
2 3
3 4
3 5
4 6
4 7



**/


