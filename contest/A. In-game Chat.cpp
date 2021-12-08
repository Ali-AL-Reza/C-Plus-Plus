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
               string s;
               cin>>s;
               reverse(s.begin(),s.end());
               int count=0;
               for(int i=0;i<n;i++){
                  if(s[i]==')'){
                           count++;
                  }
                  else{
                           break;
                  }
               }
               if(count>(n-count))cout<<"YES"<<endl;
               else cout<<"NO"<<endl;

         }

}
