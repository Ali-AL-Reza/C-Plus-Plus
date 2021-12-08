#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--){
                  //string s ="9876543210";
                  int n;
                  cin>>n;
                  if(n==3)cout<<"989"<<endl;
                  else if(n==2)cout<<"98"<<endl;
                  else if(n==1)cout<<"9"<<endl;
                  else{
                           cout<<"989";
                           int x=0;
                           for(int i=0;i<n-3;i++){
                                    cout<<x%10;
                                    x++;
                           }
                  }
                  cout<<endl;

         }

}
