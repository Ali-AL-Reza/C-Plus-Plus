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
         int n;
         cin>>n;
         map<string,string>m;
         map<string,string>::iterator it;
         for(int i=0;i<n;i++)
         {
                  string a,b;
                  cin>>a>>b;
                  if(m.find(a)==m.end())m[b]=a;
                  else
                  {
                           it=m.find(a);
                           string s=it->second;
                           m.erase(it);
                           m[b]=s;
                  }
         }
         cout<<m.size()<<endl;
         for(it=m.begin();it!=m.end();it++)
         {
                  cout<<it->second<<" "<<it->first<<endl;
         }
}

