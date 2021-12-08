#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct p
{
         int id;
         int num;
};
vector<p>arr(200001);
bool cmp(p a,p b)
{
         return (a.num<b.num);
}

int main()
{
         int t,n;
         cin>>t;
         while(t--){
                  cin>>n;
                  for(int i=0;i<n;i++){
                           cin>>arr[i].num;
                           arr[i].id=i+1;
                  }

                  sort(arr.begin(),arr.begin()+n,cmp);


                  arr[n].num=-1;
                  bool flag=false;
                  if(arr[0].num!=arr[1].num){
                           cout<<arr[0].id<<endl;
                           flag=true;
                  }
                  else{

                           for(int i=1;i<n;i++){
                                    if(arr[i].num!=arr[i-1].num && arr[i].num!=arr[i+1].num){
                                    cout<<arr[i].id<<endl;
                                    flag=true;
                                    break;
                           }
                       }
                  }
                  if(flag==false)cout<<"-1"<<endl;
                 // arr.clear();*/
         }
}
