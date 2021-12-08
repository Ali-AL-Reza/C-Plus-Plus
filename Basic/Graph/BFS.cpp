#include<bits/stdc++.h>
#define sz 1000
#define inf 1000000
using namespace std;
bool vis[sz];
vector<int>graph[sz];
int dis[sz];
void reset(){
     for(int i=0;i<sz;i++){
            vis[i]=0;
            dis[i]=inf;
            graph[i].clear();
     }

}
void bfs(int source)
{
            queue<int>q;
            q.push(source);
            dis[source]=0;
            vis[source]=1;
            while(!q.empty()){
                        int curnode=q.front();
                        q.pop();
                        for(int i=0;i<graph[curnode].size();i++){
                                    int nxtnode=graph[curnode][i];
                                    if(vis[nxtnode]==0){
                                                dis[nxtnode]=dis[curnode]+1;
                                                vis[nxtnode]=1;
                                                q.push(nxtnode);
                                    }
                        }
            }
}
int main()
{
            reset();
            int nodes,edges;
            cin>>nodes>>edges;
            for(int i=1;i<=edges;i++){
                        int  u,v;
                        cin>>u>>v;
                        graph[u].push_back(v);
                        graph[v].push_back(u);
            }
            int source;
            cin>>source;
            bfs(source);
            cout<<dis[source]<<endl;
            for(int i=1;i<=nodes;i++){
                        cout<<source<<" to "<<i<<" distance :"<<dis[i]<<endl;
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
*/

