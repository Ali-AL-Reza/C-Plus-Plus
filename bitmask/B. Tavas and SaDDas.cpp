#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
           string s;
           cin>>s;
           int x=s.size();
           ll ans=0;
           ans=(1<<x)-2;
           for(int i=x-1,count=0;i>=0;i--,count++){
                      if(s[i]=='7'){
                                 ans=ans+(1<<count);
                      }
           }
           cout<<ans+1<<endl;
}
