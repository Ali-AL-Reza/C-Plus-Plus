/**

  let the number is 1234
  we can reform it ((((1*10)+2)*10)+3)*10)+4;
  we know (a+b)% c=((a%c)+(b%c))%c;


       (a*b)%c=((a%c)*(b%c))%c;
              =((a%c)*b)%c;

**/

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int test;
         scanf("%d",&test);
         for(int t=1;t<=test;t++){
                  ll b;
                  string a;
                  ll sum=0;
                  cin>>a;
                  scanf("%lld",&b);
                  b=abs(b);
                  for(int i=0;i<a.size();i++){
                           if(a[i]=='-')continue;
                           sum=sum*10+(a[i]-'0');
                           sum=sum%b;
                  }
                  if(sum==0)printf("Case %d: divisible\n",t);
                  else printf("Case %d: not divisible\n",t);
         }
}
