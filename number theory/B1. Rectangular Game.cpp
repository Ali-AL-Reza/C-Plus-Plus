#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll divisor(ll n){
     for(int i=2;i<n;i++){
         if(n%i==0)return n/i;
     }
     return 1;
}
int main()
{
         ll n;
         cin>>n;
         ll ans=n;
         while(n!=1){
                  n=divisor(n);
                  ans=ans+n;
         }
         cout<<ans<<endl;
}
