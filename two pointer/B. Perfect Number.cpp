#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

         vector<ll>v;

     ll i,j,s=0,x;
     for(i=19;i<=100000000;i+=9)
     {
          x=i;
          s=0;
          while(x>=1)
          {
             s+=(x%10);
             x/=10;
          }
          if(s==10)
            v.push_back(i);
     }
     int n;
     cin>>n;
     cout<<v[n-1]<<endl;
}
