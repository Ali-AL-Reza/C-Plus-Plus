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
int solve(vector<lli>v,bool flag,int n)
{
    vector<int>vo,ve;
    for(int i=1;i<=n;i++)
    {
        if(flag==1 && v[i]==0)
        {
            ve.push_back(i);
            flag=0;
        }
        else if(flag==0 && v[i]==1)
        {
            vo.push_back(i);
            flag=1;
        }
        else
        {
            flag=flag^1;
        }
    }
    int cnt=0;
    for(int i=0;i<ve.size();i++)
    {
        cnt=cnt+abs(vo[i]-ve[i]);
    }
    return cnt;
}
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
             int n;
             cin>>n;
             vector<lli>v(n+1);
             int odd=0,even =0;
             for(int i=0;i<n;i++)
             {
                 int x;
                 cin>>x;
                 if(x%2==0)v[i+1]=0,even++;
                 else v[i+1]=1, odd++;

             }
             int ans;
             if(abs(odd-even)!=1 && odd!=even )cout<<-1<<endl;
             else if(odd>even)
             {
                 bool flag=1;
                  ans=solve(v,flag,n);
                  cout<<ans<<endl;
             }
             else if(odd<even)
             {
                 bool flag=0;
                 ans=solve(v,flag,n);
                 cout<<ans<<endl;
             }
             else
             {
                 int ans1=solve(v,1,n);
                 int ans2=solve(v,0,n);
                 ans=min(ans1,ans2);
                 cout<<ans<<endl;
             }

         }
}
