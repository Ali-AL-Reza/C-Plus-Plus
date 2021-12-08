#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct Item
{
         int v;
         int w;
         float d;
};
vector<Item>vec;
bool compare(Item &A,Item &B){
      return(A.d>B.d);
}
float knapsack(int n,int Weight)
{
         sort(vec.begin(),vec.end(),compare);
         float totalvalue=0,totalweight=0;
         for(int i=0;i<vec.size();i++){

                  if(totalweight+vec[i].w<=Weight){
                           totalvalue=totalvalue+vec[i].v;
                           Weight=Weight-vec[i].w;
                  }
         }
         return totalvalue;
}
int main()
{
         cout<<"Enter total item number"<<endl;
         int n;
         cin>>n;
         for(int i=0;i<n;i++){
                  cout<<"Enter "<<i<< " th value and weight"<<endl;
                  int val,weight;
                  float d;
                  cin>>val>>weight;
                  d=(float)val/weight;
                  vec.push_back({val,weight,d});
         }
         cout<<"Enter Knapsack weight"<<endl;
         int Weight;
         cin>>Weight;
         float ans=knapsack(n,Weight);
         cout<<ans<<endl;

}
/**
     4
     50 10
     60 20
     70 40
     70 30
     60
*/


