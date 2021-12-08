#include<bits/stdc++.h>
using namespace std;
int main()
{
        int test;
        scanf("%d",&test);
        for(int t=1;t<=test;t++){
         int size,n;
         scanf("%d%d",&size,&n);
         printf("Case %d:\n",t);

         deque<int>q;
         for(int i=0;i<n;i++){
                  string s;
                  int r;
                  cin>>s;
                  if(s=="pushLeft" || s=="pushRight"){

                         scanf("%d",&r);

                         if(q.size()==size){
                           printf("The queue is full\n");
                         }

                         else{
                           if(s=="pushLeft"){
                                 q.push_front(r);
                                 printf("Pushed in left: %d\n",r);
                           }
                           else if(s=="pushRight"){
                                    q.push_back(r);
                                    printf("Pushed in right: %d\n",r);
                           }
                         }


                  }
                  else if(s=="popLeft" || s=="popRight"){
                           if(q.size()==0){
                                    printf("The queue is empty\n");
                           }
                           else{
                                    if(s=="popLeft"){
                                             printf("Popped from left: %d\n",q.front());
                                             q.pop_front();
                                    }
                                    else if(s=="popRight"){
                                             printf("Popped from right: %d\n",q.back());
                                             q.pop_back();
                                    }
                           }

                  }

         }

        }

        return 0;
}
