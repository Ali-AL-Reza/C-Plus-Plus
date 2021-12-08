#include<bits/stdc++.h>
using namespace std;
int main()
{
         int n,m;
         cin>>n>>m;
         int a[n],count=0,index=0;
         int i,j;
         for( i=2;i<=n;i++){
                  for( j=2;j<i;j++){
                           if(i%j==0)break;
                  }

                  if(i==j){
                           a[index]=i;
                           index++;
                  }
         }
         for(i=2;i<index;i++){
                  for(j=i-1;j>0;j--){
                           if(a[j]+a[j-1]+1==a[i]){
                                             count++;
                                             break;
                           }
                  }
         }
         //cout<<count<<endl;
         if(count>=m)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;

}
