#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int test;
         scanf("%d",&test);
         for(int t=1;t<=test;t++){
                  ll n;
                  scanf("%lld",&n);
                  if(n%2!=0){
                           printf("Case %d: Impossible\n",t);
                           continue;
                  }
                  ll even=2;
                  ll odd=n/2;
                  while(odd%2==0){
                           odd=odd/2;
                           even=even*2;
                  }

                  printf("Case %d: %lld %lld\n",t,odd,even);
         }
}
