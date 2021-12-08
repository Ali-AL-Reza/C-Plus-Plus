#include<bits/stdc++.h>
using namespace std;
int main()
{
       int test;
       cin>>test;
       for(int t=1;t<=test;t++){
          int n;
          scanf("%d",&n);
          pair<string,int>p[n+5];///pair must be declared like p[n]
          int cmax=0,cmin=1000000;
          int minindex,maxindex;
          for(int i=0;i<n;i++){
                  string s;
                  int a,b,c;
                  cin>>s;
                  scanf("%d%d%d",&a,&b,&c);
                  p[i].first=s;
                  p[i].second=(a*b*c);
                  if(p[i].second > cmax){
                                    cmax=p[i].second;
                                    maxindex=i;

                  }
                  if(p[i].second < cmin){
                           cmin=p[i].second;
                           minindex=i;
                  }

          }

          if(cmax==cmin){
                  printf("Case %d: no thief\n",t);
          }
          else{
                  printf("Case %d: ",t);
                  cout<<p[maxindex].first<<" took chocolate from "<<p[minindex].first<<endl;
          }


       }

       return 0;
}
