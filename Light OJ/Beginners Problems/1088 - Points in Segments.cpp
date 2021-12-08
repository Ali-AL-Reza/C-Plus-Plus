#include<bits/stdc++.h>
using namespace std;
int main()
{
      int test;
      scanf("%d",&test);
      for(int t=1;t<=test;t++){
         long long int n;
         int pair;
         scanf("%lld%d",&n,&pair);

         printf("Case %d:\n",t);

         vector<long long int>v(n);

         for(int i=0;i<n;i++){
                  scanf("%lld",&v[i]);
         }

         for(int i=0;i<pair;i++){
                  long long int a,b;
                  scanf("%lld %lld",&a,&b);
                  int low,up;
                  low=lower_bound(v.begin(),v.end(),a)-v.begin();
                  up=upper_bound(v.begin(),v.end(),b)-v.begin();
                  ///cout<<low<<"   "<<up<<endl;
                  printf("%d\n",up-low);

         }

      }
}
