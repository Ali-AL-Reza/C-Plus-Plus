#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mx 1000000
bool vis[mx];
vector<ll>graph[mx];
ll cat[mx];
ll ans=0,maxcat;
void dfs(ll source,ll count)
{
        vis[source]=1;
        if(cat[source])count++;
        else count=0;
        if(count>maxcat)return;
        ll vecsize=graph[source].size();
        if(vecsize==1&& source!=1){
            ans++;
        }
        for(ll i=0;i<graph[source].size();i++){
            ll nextnode=graph[source][i];
            if(vis[nextnode]==0){
                        dfs(nextnode,count);
            }
        }
}
int main()
{
     ll nodes;
     cin>>nodes>>maxcat;
     for(ll i=1;i<=nodes;i++){
            cin>>cat[i];
     }
     for(ll i=1;i<nodes;i++){
                        ll x,y;
             cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
     }
     dfs(1,0);
     cout<<ans<<endl;

}
