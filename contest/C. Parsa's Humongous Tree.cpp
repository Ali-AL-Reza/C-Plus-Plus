#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define mod 1000000007
#define pb push_back
bool vis[sz];
vector<int>graph[sz];
int dis[sz];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
vector<pair<int,int> >v;
void bfs(int source,int update )
{
            queue<int>q;
            q.push(source);
            dis[source]=update;
            vis[source]=1;
            while(!q.empty()){
                        int curnode=q.front();
                        q.pop();
                        for(int i=0;i<graph[curnode].size();i++){
                                    int nxtnode=graph[curnode][i];
                                    if(vis[nxtnode]==0){
                                                dis[nxtnode]=max(v[nxtnode].first-dis[curnode],v[nxtnode].second-dis[curnode]);
                                                vis[nxtnode]=1;
                                                q.push(nxtnode);
                                    }
                        }
            }
}
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
             int n;
             cin>>n;
             for(int i=0;i<n;i++)
             {
                 int x,y;
                 cin>>x>>y;
                 v.push_back(make_pair(x,y));
             }
             for(int i=0;i<n-1;i++)
             {
                 int u,v;
                 cin>>u>>v;
                 graph[u].push_back(v);
                 graph[v].push_back(u);
             }
             bfs(1,min(v[0].first,v[0].second));
         }
}
