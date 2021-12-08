/**#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 1000000
vector<ll>graph[mx];
bool vis[mx];
int dis[mx];
void bfs(int source)
{
            priority_queue<ll,vector<ll>,greater<ll> >pq;
            //vis[source]=1;
            pq.push(source);
            while(!pq.empty()){
                        ll currentnode=pq.top();
                        pq.pop();
                        //if(vis[currentnode])continue;

                        vis[currentnode]=1;
                        cout<<currentnode<<" ";
                        for(int i=0;i<graph[currentnode].size();i++){
                                    int nextnode=graph[currentnode][i];
                                    //cout<<nextnode<<endl;
                                    if(vis[nextnode]==0){
                                                pq.push(nextnode);
                                                ///vis[nextnode]=1;
                                    }

                        }
            }
            cout<<endl;

}
int main()
{
    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
            int u,v;
            cin>>u>>v;
            graph[u].push_back(u);
            graph[v].push_back(v);
    }
    bfs(1);
}*/
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[100005];
bool visit[100005];


void solve(){
	priority_queue<int, vector<int>, greater<int> > pq;
	pq.push(1);
	while(!pq.empty())
	{
		int currentnode = pq.top();
		pq.pop();
		if (visit[currentnode])
			continue;
		visit[currentnode] = 1;
		cout << currentnode << " ";
		for (int i=0;i<adj[currentnode].size();i++){
                                                int nextnode=adj[currentnode][i];
			if (!visit[nextnode])
				pq.push(nextnode);
		}
	}
}

int main(){
	cin >> n >> m;
	for (int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		//--x;
		//--y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	solve();
    return 0;
}
