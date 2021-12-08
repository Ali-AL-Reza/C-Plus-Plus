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
lli digitF(lli n)
{
    lli sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    //cout<<sum<<endl;
    return sum;
}
int main()
{
         lli n;
         cin>>n;
         lli num=1000000;
         lli digit=1;
         vector<lli>v;
         for(int i=1;i<=n/2;i++)
         {
             if(n%i==0)
             {
                 v.push_back(i);
             }
         }
         for(int i=0;i<v.size();i++)
         {
             lli digiti=digitF(v[i]);
             if(digit==digiti)
             {
                 num=min(num,v[i]);
                 digit=digitF(num);
             }
             else
             {
                 if(digiti>digit)
                 {
                     digit=digiti;
                     num=v[i];
                 }

             }
            /// cout<<num<<" "<<digit<<endl;
         }
         lli digitn=digitF(n);
         if(n==0)cout<<0<<endl;
         else if(n==1)cout<<1<<endl;
         else
         {
             if(digitn>digit)cout<<n<<endl;
             else cout<<num<<endl;
         }


}
