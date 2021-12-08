#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define mod (int)1e9+7
using namespace std;
lli gethash(string key)
{
         lli p=31;
         lli p_power=1;
         lli value=0;
         for(int ch=0;ch<key.size();ch++)
         {
                  value=(value+(key[ch]-'a'+1)*p_power)%mod;
                  p_power=(p_power*p)%mod;
         }
         return value;
}
int main()
{
         bool flag=true;
         while(flag)
         {
                  string key;
                  cin>>key;
                  if(key==".")flag=false;
                  else cout<<"Hash Key is : "<<gethash(key)<<endl;
         }
}

