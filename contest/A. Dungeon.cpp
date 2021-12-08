#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--){
                 ll a,b,c;
                 cin>>a>>b>>c;
                 if(a+b+c<=8)cout<<"NO"<<endl;
                 else{
                    ll sum=a+b+c;
                    ll ans=sum/9;
                    if(a>=ans && b>=ans && c>=ans && sum%9==0)cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;

                 }

         }
}
