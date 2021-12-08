#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct chess{

  int row;
  int column;

};

bool cmp(chess &a, chess &b){
     return a.row>b.row;

}

int main()
{
         int t;
         cin>>t;
         while(t--){
               int n,m;
               cin>>n>>m;
               vector<chess>v(m);
               int count=0;
               for(int i=0;i<m;i++){
                  cin>>v[i].row>>v[i].column;
                  if(v[i].row==v[i].column){
                           v[i].row=0;
                           v[i].column=0;
                           count++;
                  }

               }
               ///sort(v.begin(),v.end(),cmp);
               int ok=0;
               for(int i=1;i<m;i++){
                  if(v[i].row !=0 && v[i].column !=0){
                           if(v[i-1].row==v[i].column){
                           ok++;
                           break;
                      }
                  }


               }
               cout<<m-count+ok<<endl;

         }

}

