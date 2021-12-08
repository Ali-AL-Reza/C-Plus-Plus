#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct job
{
         int taskid,deadline,profit;
};
vector<job>vec;
bool compare(job &A,job &B)
{
         return(A.profit>B.profit);
}
int jobschedule(int maxdead)
{
          vector<int>v1(maxdead,-1);
          int ans=0;
          for(int i=0;i<vec.size();i++){
                           int current=vec[i].deadline;
                           for(int j=current-1;j>=0;j--){
                                    if(j<maxdead && v1[j]==-1){
                                             v1[j]=vec[i].taskid;
                                             ans=ans+vec[i].profit;
                                             break;
                                    }
                           }

          }
          //cout<<v1.size()<<endl;
          for(int i=0;i<v1.size();i++){
                           if(v1[i]!=-1) cout<<v1[i]<<"\t";
          }
          cout<<endl;
          return ans;


}
int main()
{
         int taskid,deadline,profit;int maxdead=INT_MIN;
         while(cin>>taskid){
                  cin>>deadline>>profit;
                  vec.push_back({taskid,deadline,profit});
                  maxdead=max(maxdead,deadline);
         }
         //cout<<maxdead<<endl;
         sort(vec.begin(),vec.end(),compare);
        int ans=jobschedule(maxdead);
        cout<<ans<<endl;
}
/**
      4 7 1
      2 2 2
      10 3 5
      7 5 8
      8 7 10
      9 4 12
      1 9 15
      3 5 18
      6 2 20
      5 4 25

*/

