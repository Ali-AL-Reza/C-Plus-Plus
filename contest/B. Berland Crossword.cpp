#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

         int t;
         cin>>t;
         while(t--){
                           int a,b,c,d1;
                  int n,u,r,d,l;
                  cin>>n>>u>>r>>d>>l;
                  a=u-n+2;
                  b=r-n+2;
                  c=d-n+2;
                  d1=l-n+2;
                  if(a>l || a>r || b>u || b>d || c>r || c>l || d1>u || d1>d )cout<<"NO"<<endl;
                  else cout<<"YES"<<endl;
         }
}
