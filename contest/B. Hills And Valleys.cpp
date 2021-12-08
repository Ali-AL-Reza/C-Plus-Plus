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
                  vector<ll>v(n);
                  for(int i=0;i<n;i++){
                           cin>>v[i];
                  }
                  int h=0,va=0;
                  bool joint=false;
                  for(int i=1;i<n-1;i++){
                           if(v[i]>v[i-1]&& v[i]>v[i+1])h++;
                           else if(v[i]<v[i-1] && v[i]<v[i+1])va++;
                           if (joint==false && v[i]>v[i-1] && v[i]>v[i+1] && v[i+1]<v[i+2] && i<n-2)joint=true;
                  }
                     //cout<<h<<"  "<<va<<"  "<<joint<<endl;
                  if(h+va==0)cout<<"0"<<endl;
                  else {
                           if(joint==true)cout<<h+va-3<<endl;
                           else cout<<h+va-1<<endl;
                  }

         }


}

