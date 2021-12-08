#include<bits/stdc++.h>
using namespace std;
int main()
{
         int t;
         scanf("%d",&t);
         for(int test=0;test<t;test++){
                 int maxx=0;
                 int n,x;
                 scanf("%d%d",&n,&x);
                 vector<int>v1(n),v2(n);
                 for(int i=0;i<n;i++){
                  scanf("%d",&v1[i]);
                  maxx=max(maxx,v1[i]);
                 }
                 for(int i=0;i<n;i++){
                  scanf("%d",&v2[i]);
                  maxx=max(maxx,v2[i]);
                 }
                 if(maxx>x){
                  printf("No\n");
                  continue;
                 }
                 else{
                  bool flag=true;
                 reverse(v2.begin(),v2.end());
                  for(int i=0;i<n;i++){
                           if(v1[i]+v2[i]>x){
                                    flag=false;
                                    break;
                           }
                  }
                  if(flag)printf("Yes\n");
                  else printf("No\n");
                 }
         }
}
