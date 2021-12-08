#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define mod 1000000007
#define pb push_back
using namespace std;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,1,-1,1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
int n,m;
char ar[102][102];
bool vis[102][102];
bool isValid(int x,int y)
{
         if(x<1 or x>n or y<1 or y>m)return true;
         ///if(vis[x][y]==true || ar[x][y]=='.')return false;

         return false;
}
bool dfs2D(int x,int y)
{
         vis[x][y]=true;
         ///cout<<x<<" "<<y<<endl;
         ///if(isValid(x-1,y))dfs2D(x-1,y);///up
         ///if(isValid(x,y+1))dfs2D(x,y+1);///right
        /// if(isValid(x+1,y))dfs2D(x+1,y);///down
         ///if(isValid(x,y-1))dfs2D(x,y-1);///left
         for(int i=0;i<8;i++)
         {
                  int newx=x+dx[i];
                  int newy=y+dy[i];
                  if(ar[newx][newy]=='*' && isValid(newx,newy)==false)return false;
         }
         return true;

}

int main()
{
         while(cin>>n>>m)
         {
             if(n==0 && m==0)break;
            /// REP1(i,102)REP1(j,102)vis[i][j]==false;

             REP1(i,n)REP1(j,m)cin>>ar[i][j];

         int cc=0;

         REP1(i,n)
         {
             REP1(j,m)
             {
                 if( ar[i][j]=='*')
                 {
                     if(dfs2D(i,j))cc++;
                 }
             }
         }
         cout<<cc<<endl;
         }

}
