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
                  string s;
                  cin>>s;
                  stack<char>c;
                  for(int i=0;i<s.size();i++)
                  {
                           if(s[i]=='B' && c.size()>0)
                           {
                                    c.pop();
                           }
                           else
                           {
                                    c.push(s[i]);
                           }
                  }
                  cout<<c.size()<<endl;
         }
}

