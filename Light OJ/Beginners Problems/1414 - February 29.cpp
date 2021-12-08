#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        int test;
        scanf("%d",&test);
        for(int t=1;t<=test; t++){
         string m1,m2;
         ll date1,year1,date2,year2;
         char c1,c2;
         cin>>m1;
         cin>>date1>>c1>>year1;
         ///scanf("%d %c %d",&date1,&c1,&year1);
         cin>>m2;
         cin>>date2>>c2>>year2;
          ///scanf("%d %c %d",&date2,&c2,&year2);

          if(m1=="January" || m1=="February"){
                  year1=year1;
          }
          else{
                  year1++;
          }
          if(m2=="January" || (m2=="February" && date2<29)){
                  year2--;
          }
        ll ans=(year2/4 -year2/100 +year2/400)-((year1-1)/4 -(year1-1)/100 +(year1-1)/400);
          ///printf("Case %d: %d",t,ans);
          cout<<"Case "<<t<<": "<<ans<<endl;

        }
        return 0;
}
