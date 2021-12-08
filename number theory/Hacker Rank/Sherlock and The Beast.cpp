#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define mod 1000000007
#define pb push_back
#define str string
using namespace std;
vector<int>ar[N];
bool vis[N];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
             int n;
             cin>>n;
             if(n<3)cout<<-1<<endl;
             else if(n%3==0)
             {
                 for(int i=0;i<n;i++)
                 {
                     cout<<5;
                 }
                 cout<<endl;
              }
              else
              {
                  int a=5;
                  while((n-a)>0)
                  {
                      if((n-a)%3 !=0)
                      {
                          a=a+5;
                      }
                      else
                      {
                          break;
                      }
                  }
                  if((n-a)>=0)
                  {
                      for(int i=0;i<n-a;i++)
                      {
                          cout<<5;
                      }
                      for(int i=0;i<a;i++)
                      {
                          cout<<3;
                      }
                      cout<<endl;
                  }
                   else
                   {
                       cout<<-1<<endl;
                   }
              }

         }
}
