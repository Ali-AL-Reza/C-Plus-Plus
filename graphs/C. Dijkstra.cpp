#include<bits/stdc++.h>
#define sz 100010
#define inf 1000000000000
using namespace std;
typedef long long ll;
struct Node
{
            int val,cost;
};
vector<Node>G[sz];
bool vis[sz];
ll dist[sz];
int parent[sz];
class cmp
{
public:
            bool operator()(Node &A,Node &B){
               if(A.cost>B.cost)return true;
               return false;
            }
};
void reset()
{
            for(int i=0;i<sz;i++)
            {
                        vis[i]=0;
                        dist[i]=inf;
                        parent[i]=i;
                        G[i].clear();
            }
}
void find(int n)
{
            if(n==parent[n]){
                        //cout<<n<<" ";
                        printf("%d",n);
                        return;
            }
            else{
                        find(parent[n]);
                        //cout<<n<<" ";
                        printf(" %d",n);
            }
}
void dijkstra(int source)
{
            priority_queue<Node,vector<Node>,cmp>pq;
            pq.push({source,0});
            while(!pq.empty()){
                     int node=pq.top().val;
                     int cost=pq.top().cost;
                     pq.pop();
                     if(vis[node]==1)continue;
                     vis[node]=1;
                     dist[node]=cost;
                     for(int i=0;i<G[node].size();i++){
                        int nxtnode=G[node][i].val;
                        int nxtcost=G[node][i].cost;
                        if(!vis[nxtnode]){
                                    if(cost+nxtcost<dist[nxtnode]){
                                                dist[nxtnode]=cost+nxtcost;
                                                parent[nxtnode]=node;
                                    }
                                    pq.push({nxtnode,cost+nxtcost});
                        }
                     }
            }

}
int main()
{
            reset();
      int nodes,edges;
      //cin>>nodes>>edges;
      scanf("%d%d",&nodes,&edges);
      for(int i=1;i<=edges;i++){
            int u,v,w;
            //cin>>u>>v>>w;
            scanf("%d%d%d",&u,&v,&w);
            if(u!=v){
                        G[u].push_back({v,w});
                        G[v].push_back({u,w});
            }
      }
      dijkstra(1);
      if(dist[nodes]==inf){//cout<<" -1"<<endl;
                  printf("-1");
      }
      else{
            find(nodes);
      }
}
