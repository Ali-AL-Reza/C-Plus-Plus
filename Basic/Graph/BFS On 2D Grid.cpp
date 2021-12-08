#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
#define pb push_back
using namespace std;
vector<int>ar[N];
bool vis[1001][1001];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int n,m;
int dis[1001][1001];

bool isValid(int x,int y)
{
         if(x<1 or x>n or y<1 or y>m)return false;
         if(vis[x][y]==true)return false;

         return true;
}
void bfs2D(int x,int y)
{
         queue<pair<int,int> >q;
         q.push({x,y});
         dis[x][y]=0;
         vis[x][y]=true;
         while(!q.empty())
         {
                  int curx=q.front().first;
                  int cury=q.front().second;
                  q.pop();
                  for(int i=0;i<4;i++)
                  {
                           if(isValid(curx+dx[i],cury+dy[i]))
                           {
                                    int newx=curx+dx[i];
                                    int newy=cury+dy[i];
                                    dis[newx][newy]=dis[curx][cury]+1;
                                    vis[newx][newy]=true;
                                    q.push({newx,newy});
                           }
                  }
         }

}
int main()
{
         cin>>n>>m;
         bfs2D(1,1);
         REP1(i,n)
         {
                  REP1(j,m)cout<<dis[i][j]<<" ";

                  cout<<endl;
         }
}
