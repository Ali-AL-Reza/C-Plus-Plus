#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        int n,sum;
        scanf("%d%d",&n,&sum);
        if(sum==0 || sum> 9*n){
             if(sum==0 && n==1)printf("0 0\n");
             else printf("-1 -1\n");
             return 0;
        }

        int sum2=sum;

        for(int i=n-1;i>=0;i--){
         int minn=max(0,sum2-9*i);
         if(minn==0 && i==(n-1))minn=1;
         sum2=sum2-minn;
         printf("%d",minn);
        }
        printf(" ");

        for(int i=0;i<n;i++){
         int maxx=min(9,sum);
         printf("%d",maxx);
         sum=sum-maxx;
        }
       printf("\n");

}
