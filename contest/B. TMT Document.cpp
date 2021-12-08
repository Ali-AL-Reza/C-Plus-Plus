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
                  int n;
                  cin>>n;
                  vector<char>v(n);
                  int T=0,M=0,totalt=0;
                  int anst=0;
                  for(int i=0;i<n;i++)
                  {
                        ///char ch;
                        cin>>v[i];
                        if(v[i]=='T')
                        {
                                 T++;
                                 totalt++;
                        }
                        else
                        {
                                 M++;
                                 totalt=0;
                        }
                        anst=max(totalt,anst);
                  }
                  ///cout<<anst<<endl;
                  if(v[0]=='M' || v[n-1]=='M' || (2*M)!=T)cout<<"NO"<<endl;
                  else
                  {
                           if(anst>(T/2))cout<<"NO"<<endl;
                           else cout<<"YES"<<endl;
                  }
         }
}

