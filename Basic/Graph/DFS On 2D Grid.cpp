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
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int n,m;
bool vis[1001][1001];
bool isValid(int x,int y)
{
         if(x<1 or x>n or y<1 or y>m)return false;
         if(vis[x][y]==true)return false;

         return true;
}
void dfs2D(int x,int y)
{
         vis[x][y]=true;
         cout<<x<<" "<<y<<endl;
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
         cin>>n>>m;
         dfs2D(1,1);
}

