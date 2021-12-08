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
bool cmp(string &s1,string &s2)
{
         return s1.size()<s2.size();
}
int main()
{
         int n;
         cin>>n;
         vector<string>s(n);
         for(int i=0;i<n;i++)
         {
                  cin>>s[i];
         }
         bool ans=true;
         sort(s.begin(),s.end(),cmp);
         ///bool ans=true;
         for(int i=0;i<n-1;i++)
         {
                  int x=s[i+1].find(s[i]);
                  if(x==string::npos)
                  {
                           ans=false;
                           break;
                  }

         }
         if(ans)
         {
                  cout<<"YES"<<endl;
                  for(int i=0;i<n;i++)cout<<s[i]<<endl;
         }
         else cout<<"NO"<<endl;
}

