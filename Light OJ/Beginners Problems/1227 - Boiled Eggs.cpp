#include<bits/stdc++.h>
using namespace std;
int main()
{
        int test;
        scanf("%d",&test);
        for(int t=1;t<=test;t++){
         int eggs,level,weight;
         scanf("%d%d%d",&eggs,&level,&weight);
         int count=0,sumweight=0;
         for(int i=0;i<eggs;i++){
                  int x;
                  scanf("%d",&x);
                  ///cout<<eggs<<"   "<<count+1<<endl;
                  if(count+1<=level && sumweight+x <=weight){
                           count++;
                           ///cout<<count<<endl;
                           sumweight=sumweight+x;
                  }
         }
         printf("Case %d: %d\n",t,count);

        }

}
