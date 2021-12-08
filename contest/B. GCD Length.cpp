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
lli digit(int n)
{
         if(n==1)return 1;
         else if(n==2)return 10;
         else if(n==3)return 100;
         else if(n==4)return 1000;
         else if(n==5)return 10000;
         else if(n==6)return 100000;
         else if(n==7)return 1000000;
         else if(n==8)return 10000000;
         else if(n==9)return 100000000;

}
lli digit1(int n)
{
         if(n==1)return 9;
         else if(n==2)return 99;
         else if(n==3)return 999;
         else if(n==4)return 9999;
         else if(n==5)return 99999;
         else if(n==6)return 999999;
         else if(n==7)return 9999999;
         else if(n==8)return 99999999;
         else if(n==9)return 999999999;

}
lli gcd(lli a,lli b)
{
         if(b==0)return a;
         else return gcd(b,a%b);
}
int main()
{
         int t;
         cin>>t;
         lli a1,b1,clo,chi;
         while(t--)
         {
                  int a,b,c;
                  cin>>a>>b>>c;
                   a1=digit(a);
                   b1=digit(b);
                   clo=digit(c);
                   /***chi=digit1(c);
                   ///cout<<a1<< " "<<b1<<" "<<clo<<" "<<chi<<endl;
                  while(1)
                  {
                       lli ans=gcd(a1,b1);
                      /// cout<<ans<<endl;
                      /// cout<<clo<< " "<<chi<<endl;
                       if(clo<=ans && chi>=ans)
                       {
                          cout<<a1<<" "<<b1<<endl;
                           break;
                        }
                       else b1++;
                   }**/
                   if(a>b)
                   {
                            cout<<a1+clo<<" "<<b1<<endl;
                   }
                   else cout<<a1<<" "<<b1+clo<<endl;
         }
}

