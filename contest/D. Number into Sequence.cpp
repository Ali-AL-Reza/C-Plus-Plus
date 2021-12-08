#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
         int t;
         cin>>t;
         while(t--){
                  ll n;
                  cin>>n;
                  ll x=n;
                  for(int i=2;i*i<=n;i++){
                           if(n%i==0){
                                    ll cnt=0,ans;
                                    ll countans=0;
                                    while(x%i==0){
                                           cnt++;
                                    }
                                    if(countans<cnt){
                                             countans=cnt;
                                             ans=i;
                                    }
                           }
                  }
                  if(countans==0)cout<<"1"<<endl<<n<<endl;
                  else{
                           cout<<countans<<endl;
                  }
         }
}
