#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--){
                 int n;
                 cin>>n;
                 vector< ll>v(n+1);
                 bool ans=true;
                 for(int i=1;i<=n;i++){
                  cin>>v[i];
                 }
                /**** if(n%2==0){
                     int mid=n/2;
                     int j=n;
                     for(int i=1;i<=mid;i++){
                           cout<<v[i]<<" "<<v[j--]<<" ";
                     }
                     cout<<endl;
                 }
                 else{
                      int mid=n/2;
                     int j=n;
                     for(int i=1;i<=mid;i++){
                           cout<<v[i]<<" "<<v[j--]<<" ";
                     }
                     cout<<v[mid+1]<<endl;
                 }***/
                 for(int i=1,j=n;i<=j;i++,j--){
                  if(i!=j){
                           cout<<v[i]<<" "<<v[j]<<" ";
                  }
                  else{
                           cout<<v[i]<<" ";
                  }

                 }
                 cout<<endl;

         }
}
