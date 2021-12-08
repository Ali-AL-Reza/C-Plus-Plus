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
int ar[1001][1001];
bool vis[1001][1001];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int n,m;
bool isValid(int x,int y)
{
         if(x<1 or x>n or y<1 or y>m)return false;
         if(vis[x][y]==true or ar[x][y]==0)return false;

         return true;
}
void dfs2D(int x,int y)
{
         vis[x][y]=true;
         ///if(isValid(x-1,y))dfs2D(x-1,y);///up
         ///if(isValid(x,y+1))dfs2D(x,y+1);///right
        /// if(isValid(x+1,y))dfs2D(x+1,y);///down
         ///if(isValid(x,y-1))dfs2D(x,y-1);///left
         for(int i=0;i<4;i++)
         {
                  int newx=x+dx[i];
                  int newy=y+dy[i];
                  if(isValid(newx,newy))dfs2D(newx,newy);
         }

}
int main()
{
         int t=1;

         while(t--)
         {
                  REP1(i,1001)REP1(j,1001)vis[i][j]=false;
                  cin>>n>>m;
                  REP1(i,n)REP1(j,m)cin>>ar[i][j];

                  int cc=0;
                  REP1(i,n)
                  {
                           REP1(j,m)
                           {
                                    if(ar[i][j]==1 && vis[i][j]==false)
                                    {
                                             dfs2D(i,j);
                                             cc++;
                                    }
                           }
                  }
                  cout<<cc<<endl;
         }
}
/**
4 4
0 1 0 1
0 1 1 0
0 0 0 1
1 1 0 1

**/

