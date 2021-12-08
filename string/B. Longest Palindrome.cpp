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
         int n,m;
         cin>>n>>m;
         vector<string>v(n);
         for(int i=0;i<n;i++)cin>>v[i];

         string lf,lb,lm;
         int temp2=0;

         for(int i=0;i<n;i++)
         {
                  string s=v[i];
                  reverse(s.begin(),s.end());

                  for(int j=i+1;j<n;j++)
                  {
                           if(s==v[j])
                           {
                                    lf=lf+v[i];
                                    lb=v[j]+lb;
                           }
                  }
                  if(temp2==0 && s==v[i])
                           {
                                    lm=lm+v[i];
                                    temp2=1;
                           }
         }
         string s=lf+lm+lb;
         cout<<s.size()<<endl;
         cout<<s<<endl;
}

