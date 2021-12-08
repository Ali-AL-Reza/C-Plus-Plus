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
                  bool ans=false;
                  for(int i=0;i<s.size();i++)
                  {
                          if(s[i]!='a'){
                                    ans=true;
                                    break;
                          }
                  }
                  if(ans==false)cout<<"NO"<<endl;
                  else
                  {
                           cout<<"YES"<<endl;
                           string s2=s;
                           reverse(s2.begin(),s2.end());
                           if(s==s2)
                           {
                                    cout<<"a"<<s<<endl;
                           }
                           else{
                                    int in=ceil((double)s.size()/2);
                           //cout<<in<<endl;
                                    s.insert(in,"a");
                                    cout<<s<<endl;
                           }
                  }
         }
}

