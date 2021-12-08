#include<bits/stdc++.h>
using namespace std;
unsigned long long int fact[22];
void gen()
{
         fact[0]=1;
         for(int i=1;i<=20;i++){
                  fact[i]=fact[i-1]*i;
         }

}

int main()
{
         gen();
         int test;
         scanf("%d",&test);
         for(int t=1;t<=test;t++){
                  long long int x;
                  scanf("%lld",&x);
                  stack<int>q;
                  int i=20;
                  while(i>=0){
                           if(fact[i]<=x){
                                    q.push(i);
                                    x=x-fact[i];
                           }
                           i--;
                  }

                  if(x==0){
                           printf("Case %d: ",t);
                           while(q.size()!=1){
                                    printf("%d!+",q.top());
                                    q.pop();
                           }
                           printf("%d!\n",q.top());
                           q.pop();
                  }

                  else{
                           printf("Case %d: impossible\n",t);

                  }

         }

}
