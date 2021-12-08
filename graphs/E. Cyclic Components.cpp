#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mx 1000000
vector<ll>graph[mx];
bool vis[mx];
bool check=false;
int ans=0;
int dfs(ll source)
{
            vis[source]=1;
            if(graph[source].size()!=2)check=false;
            for(ll i=0;i<graph[source].size();i++){
                        ll nextnode=graph[source][i];
                        if(!vis[nextnode])dfs(nextnode);
            }
}
int main()
{
            ll nodes,edges;
            cin>>nodes>>edges;
            for(ll i=1;i<=edges;i++){
                        ll u,v;
                        cin>>u>>v;
                        graph[u].push_back(v);
                        graph[v].push_back(u);
            }
            for(ll i=1;i<=edges;i++){
                        if(vis[i])continue;
                        check=1;
                        dfs(i);
                        if(check)ans++;


            }
            cout<<ans<<endl;

}
