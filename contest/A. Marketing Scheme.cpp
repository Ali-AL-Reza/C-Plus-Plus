#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
     int t;
     scanf("%d",&t);
     for(int test=0;test<t;test++){
         ll x1,x2;
         scanf("%lld%lld",&x1,&x2);
         double a=(double)(x2+1)/2;
         //cout<<a<<endl;
         if((x1%(x2+1))>=a)printf("YES\n");
         else printf("NO\n");
     }
}
