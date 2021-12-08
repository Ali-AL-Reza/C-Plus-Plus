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
bool vis[N][N];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
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
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
             int n;
             cin>>n;
             lli cnt=0;
             vector<char>v;
             for(int i=0;i<n;i++)
             {
                 char x;
                 cin>>x;
                 v.push_back(x);
                 if(x=='2')cnt++;
             }
             lli ess=nCk(n,3);
             ///cout<<ess<<" "<<cnt<<endl;
             //for(int i=0;i<n;i++)cout<<v[i]<<endl;
             for(int i=0;i<n;i++)for(int j=0;j<n;j++)vis[i][j]=false;
             if(ess<=cnt)cout<<"NO"<<endl;
             else
             {
                 cout<<"YES"<<endl;
                 ///bool pl=false,mi=false;
                 for(int i=0;i<n;i++)
                    {
                        for(int j=0;j<n;j++)
                        {
                            int pi=1,mi=1;
                            if(i==j)cout<<"X";
                            else if(v[i]=='1' && vis[i][j]==false)cout<<"=";
                            else if(v[i]=='2' && v[i][j]==false && pi=1)
                            {
                                cout<<"+";
                                pi=0;
                                vis[j][i]=true;
                            }
                            else if(v[i]==2 && v[j][i]==true)
                            {
                                cout<<"-";
                            }

                          }
                        cout<<endl;
                    }
                     cout<<endl;
             }
         }
}
