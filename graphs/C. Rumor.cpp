#include<bits/stdc++.h>
#define sz 10000000
#define inf 2e9;
typedef long long ll;

using namespace std;
vector<ll>graph[sz];
int value[sz];
bool vis[sz];
ll ans;
int maxvalue;
void dfs(int source)
{
         vis[source]=true;
         maxvalue=min(maxvalue,value[source]);
         for(int i=0;i<graph[source].size();i++){
                  int nextnode=graph[source][i];
                  if(!vis[nextnode]){
                           dfs(nextnode);
                  }
         }



}
int main()
{
         ll n,m;
         cin>>n>>m;
         for(ll i=1;i<=n;i++){
                  cin>>value[i];
         }
         for(ll i=1;i<=m;i++){
                  ll u,v;
                  cin>>u>>v;
                  graph[u].push_back(v);
                  graph[v].push_back(u);
         }
         for(ll i=1;i<=n;i++){
                  if(!vis[i]){
                           maxvalue=inf;
                           dfs(i);
                           ans=ans+maxvalue;

                  }
         }
         cout<<ans<<endl;
}
