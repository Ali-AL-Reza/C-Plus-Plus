#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    int sum=n;
    for(i=1;i<=n;i++){
                  //cout<<sum<<endl;
        sum+=(n-i)*i;
    }
    printf("%d\n",sum);

    return 0;

}
