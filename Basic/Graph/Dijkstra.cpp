#include<bits/stdc++.h>
using namespace std;
#define mx 105
#define infinity 100000000
 struct node{
  int val;
  int cost;
 };
 vector<node>G[mx];
 bool vis[mx];
 int dis[mx];
 void reset(){
        for(int i=0;i<mx;i++){
            G[i].clear();
            vis[i]=0;
            dis[i]=infinity;
        }
 }
class cmp
{
               public:
                           bool operator()(node &A,node &B){
                                       if(A.cost>B.cost)return true;
                                       return false;
                           }


};
 void dijkstra(int source,int destination)
 {
             priority_queue<node,vector<node>,cmp>pq;
             pq.push({source,0});
             while(!pq.empty()){
                        node current=pq.top();
                        pq.pop();
                        int val=current.val;
                        int cost=current.cost;
                        if(vis[val]==1)continue;
                        dis[val]=cost;
                        vis[val]=1;
                        if(dis[val]==destination){
                                    break;
                        }
                        for(int i=0;i<G[val].size();i++){
                                    int nxt=G[val][i].val;
                                    int nxtcost=G[val][i].cost;
                                    if(vis[nxt]==0){
                                                pq.push({nxt,cost+nxtcost});
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
                        int u,v,w;
                        cin>>u>>v>>w;
                        G[u].push_back({v,w});
             }
             cout<<"enter source:"<<endl;
             int source;
             cin>>source;
             cout<<"Enter destination:"<<endl;
             int destination;
             cin>>destination;
             dijkstra (source,destination);
             cout<<dis[destination]<<endl;


             return 0;


 }
 /***
  6 9
0 4 100
0 1 25
0 5 7
1 4 2
1 5 7
2 1 2
2 5 8
2 3 1
3 5 3
0 4
*/
