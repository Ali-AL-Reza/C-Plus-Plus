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
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                lli n,x,y;
                cin>>n>>x>>y;
                if(n==2)cout<<x<<" "<<y<<endl;
                else{lli diff=(y-x);
                lli ans=diff;
                for(int i=1;i<diff;i++)
                {
                         if(diff%i==0 && (diff/i)+1<=n)
                         {
                                  ans=i;
                                  break;
                         }
                }
                ///cout<<ans<<endl;
                lli a=y;
                while(n>0 && a>0)
                {
                         cout<<a<<" ";
                         a=a-ans;
                         n--;
                }
                while(n>0)
                {
                         cout<<y+ans<<" ";
                         y=y+ans;
                         n--;
                }
                }
                cout<<endl;
         }
}

