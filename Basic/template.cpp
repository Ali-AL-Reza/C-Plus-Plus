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
vector<int>ar[N];
bool vis[N];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};

/****

///2^n
bool IsPower2(int n)
{
         if (n<=0)return false;
         if((n & (n-1))==0)return true;
         else return false;
}
///a^n
lli power(lli a,lli n)
{
         lli res=1;
         while(n)
         {
                  if(n%2)
                  {
                           res=(res*a)%p;
                           n--;
                  }
                  else
                  {
                           a=(a*a)%p;
                           n=n/2;
                  }
         }
         return res;
}
///bfs2D
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

///dfs2D
bool isValid(int x,int y)
{
         if(x<1 or x>n or y<1 or y>m)return false;
         if(vis[x][y]==true)return false;

         return true;
}
void dfs2D(int x,int y)
{
         vis[x][y]=true;
         ///cout<<x<<" "<<y<<endl;
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
///digit_sum
lli sum(lli n)
{
         lli x=0;
         while(n>0)
         {
                  x=x+n%10;
                  n=n/10;
         }
         return x;
}
///factorial
lli F[N];
void factorial()
{
         F[0]=F[1]=1;
         for(int i=2;i<=1000000;i++){
                  F[i]=(F[i-1]*1LL*i)%mod;
         }
}
///gcd
lli gcd(lli a,lli b)
{
         if(b==0)return a;
         else return gcd(b,a%b);
}
///isPrime
bool isprime(lli n)
{
         if(n<=1)return false;
         if(n<=3)return true;
         if(n%2==0 or n%3==0)return false;
         for(int i=5;i*i<=n;i=i+2)
         {
                  if(n%i==0)return false;
         }
         return true;
}
///nCk
lli nCk(int n,int k)
{
         lli ans=1;
         if(k>n-k)k=n-k;
         for(int i=0;i<k;i++)
         {
                  ans=(ans*(n-i));
                  ans=(ans/(i+1));
         }
         return ans;
}
///primefactorial
vector<int>v;
void primefact(lli n)
{
         for(int i=2;i*i<=n ;i++)
        {
                 if(n%i==0)
                 {
                          while(n%i==0)
                          {
                                   v.push_back(i);
                                   n=n/i;
                          }
                 }
        }
}
///string_size_compair
bool cmp( string &A, string &B)
{
         return A.size()<B.size();
}
///LDA_positive_solution
lli gcd(lli a,lli b,lli& x,lli& y)
{
         if(b==0)
         {
                  x=1;
                  y=0;
                  return a;
         }
         lli x1,y1;
         lli d=gcd(b,a%b,x1,y1);
         x=y1;
         y=x1-y1*(a/b);
         return  d;
}
bool find_anysolution(lli a,lli b,lli c,lli& x,lli& y,lli& g)
{
         lli x0,y0;
         g=gcd(abs(a),abs(b),x0,y0);
         if(c%g!=0)return false;
         x=x0*(c/g);
         y=y0*(c/g);
         if(a<0)x=-x;
         if(b<0)y=-y;
         while(x<0)
         {
                  x=x+b/g;
                  y=y-a/g;///k er bodole loop chalabo
         }
         while(y<0)
         {
                  x=x-b/g;
                  y=y+a/g;
         }
         return true;
}
///LDA_Solution
{
         if(b==0)
         {
                  x=1;
                  y=0;
                  return a;
         }
         int x1,y1;
         int d=gcd(b,a%b,x1,y1);
         x=y1;
         y=x1-y1*(a/b);
         return  d;
}
bool find_anysolution(int a,int b,int c,int& x,int& y,int& g)
{
         int x0,y0;
         g=gcd(abs(a),abs(b),x0,y0);
         if(c%g!=0)return false;
         x=x0*(c/g);
         y=y0*(c/g);
         if(a<0)x=-x;
         if(b<0)y=-y;
         return true;
}


***/
int main()
{
         int t;
         cin>>t;
         while(t--)
         {

         }
}

