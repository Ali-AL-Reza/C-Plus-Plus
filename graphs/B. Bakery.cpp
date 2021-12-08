#include<bits/stdc++.h>
typedef long long ll;
const ll maxx=1e5+10;
const ll maxxx=1e9+10;
using namespace std;
ll flag[maxx];
ll storage[maxx];
struct edge
{
         ll to;
         ll c;
};
vector<edge>vec[maxx];
int main()
{
         ll n,m,k;
         cin>>n>>m>>k;
         for(ll i=1;i<=m;i++){
                  ll u,v,w;
                  cin>>u>>v>>w;
                  vec[u].push_back({v,w});
                  vec[v].push_back({u,w});
         }
         for(ll i=1;i<=k;i++){
                  cin>>storage[i];
                  flag[storage[i]]=1;
         }
         ll ans=maxxx;
         for(ll i=1;i<=k;i++){
                  ll startnode=storage[i];///stroge theke traverse suru korbo
                  for(ll j=0;j<vec[startnode].size();j++){
                           ll nextnode=storage[i];
                           if(flag[vec[nextnode][j].to]==0){
                                    ll cost=vec[storage[i]][j].c;
                                    ans=min(ans,cost);
                           }
                  }

         }
         if(k==0){
                  cout<<"-1"<<endl;
                  return 0;
         }
         if(ans!=maxxx){
                  cout<<ans<<endl;
         }
         else{
                  cout<<"-1"<<endl;
         }
         return 0;
}
