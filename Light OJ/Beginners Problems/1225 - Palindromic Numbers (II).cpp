#include<bits/stdc++.h>
using namespace std;
int main()
{
         int test;
         scanf("%d",&test);
         for(int t=1;t<=test;t++){
                  string a;
                  cin>>a;
                  string b;
                  b=a;
                  reverse(b.begin(),b.end());
                  if(a==b)printf("Case %d: Yes\n",t);
                  else printf("Case %d: No\n",t);
         }
}
