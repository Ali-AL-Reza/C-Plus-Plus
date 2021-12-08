#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,m;
      scanf("%d",&n);
      vector<int>v1(n);
      for(int i=0;i<n;i++)scanf("%d",&v1[i]);

      scanf("%d",&m);
      vector<int>v2(m);
      for(int i=0;i<m;i++){
                  scanf("%d",&v2[i]);
      }

      sort(v1.begin(),v1.end());
      sort(v2.begin(),v2.end());

      bool vis[m]={false};
      int count=0;

      for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
                  if(((v1[i]-1==v2[j]) || v1[i]==v2[j] || v1[i]+1 == v2[j]) && vis[j]== false){
                           count++;
                           vis[j]=true;
                           break;
                  }
         }
      }
      printf("%d\n",count);


}
