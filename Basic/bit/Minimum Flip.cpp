#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(iint i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                  int a,b,c;
                  cin>>a>>b>>c;
                  int res=0;
                  for(int i=0;i<32;i++)
                  {
                           bool x=false,y=false,z=false;
                           if(a & (1<<i))x=true;
                           if(b & (1<<i))y=true;
                           if(c & (1<<i))z=true;

                           if(z==false)
                           {
                                    if(x==true && y==true)res=res+2;

                                    else
                                    {
                                             if(x==true || y==true)res++;
                                    }
                           }
                           else
                           {
                                    if(x==false && y==false)res++;
                           }
                  }
                  cout<<res<<endl;
         }
}

