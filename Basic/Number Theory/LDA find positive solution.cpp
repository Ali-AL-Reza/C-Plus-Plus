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

int main()
{
                  lli a,b,c,x,y,g;
                  cin>>c>>a>>b;
                  if(a==0 && b==0)cout<<"NO"<<endl;
                  else{
                           if(a==0)
                           {
                                    if(c%b==0)cout<<"YES"<<endl<<0<<" "<<c/b<<endl;
                                    else cout<<"NO"<<endl;
                           }
                           else if(b==0)
                           {
                                    if(c%a==0)cout<<"YES"<<endl<<c/a<<" "<<0<<endl;
                                    else cout<<"NO"<<endl;
                           }
                           else
                           {
                                   if(find_anysolution(a,b,c,x,y,g)==false)cout<<"NO"<<endl;
                                   else
                                   {
                                            if(x>=0 && y>=0)cout<<"YES"<<endl<<x<<" "<<y<<endl;
                                            else cout<<"NO"<<endl;
                                   }
                           }
                  }
}


