#include<bits/stdc++.h>
#define sz 1000
#define inf 10000
using namespace std;
bool vis[sz];
vector<int>graph[sz];
int dis[inf];
void dfs(int source)
{
            vis[source]=1;
            for(int i=0;i<graph[source].size();i++){
                        int nextnode=graph[source][i];
                        if(vis[nextnode]!=1){
                                    dfs(nextnode);
                        }
            }
}
int main()
{
            int nodes,edges;
            cin>>nodes>>edges;
            for(int i=1;i<=edges;i++){
                        int u,v;
                        cin>>u>>v;
                        graph[u].push_back(v);
                        graph[v].push_back(u);
            }
            int source;
            cin>>source;
            dfs(source);
            for(int i=1;i<=nodes;i++){
                        if(vis[i]==1)cout<<"node "<<i<<" is visited"<<endl;
                        else cout<<" not visited"<<endl;
            }

}
/**
7 9
1 2
1 3
1 7
2 4
2 3
3 7
3 6
4 5
5 6
1
**/
