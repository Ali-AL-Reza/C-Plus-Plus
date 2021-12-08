#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
int gcd(int a,int b,int& x,int& y)
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
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                  int a,b,c,x,y,g;
                  cin>>a>>b>>c;
                  if(find_anysolution(a,b,c,x,y,g)==false)cout<<"NO Solution"<<endl;
                  else
                  {
                           cout<<x<<" "<<y<<endl;
                  }

         }
}

