#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         ll n,m;
         vector<ll>v;
         ll count;
         int j;
         ll ans=0;
         cin>>n>>m;
         if(n>m)swap(n,m);
         for(int i=1;i<=5;i++){
                  if(i==5)j=m;
                 else j=m+i;
                  count=j/5;
                  //cout<<j<<" "<<count<<endl;
                  v.push_back(count);
                  ans=ans+count;
         }
         ll cnt,rem, ans2=0;
         cnt=n/5;
         rem=n-(cnt*5);
         //cout<<cnt<<" "<<rem<<endl;
         for(int i=0;i<rem;i++){
                  ans2=ans2+v[i];
         }
         cout<<(cnt*ans)+ans2<<endl;
}
