#include<bits/stdc++.h>
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
         string sa="2020";
         string s1,s2,s3,s4,s5;
         s1=s.substr(0,4);
         s2=s.substr(n-4,4);
         s3=s.substr(0,1)+s.substr(n-3,3);
         s4=s.substr(0,2)+s.substr(n-2,2);
         s5=s.substr(0,3)+s.substr(n-1,1);
         if(s1==sa||s2==sa||s3==sa||s4==sa||s5==sa){
                  cout<<"YES"<<endl;
         }
         else {
                  cout<<"NO"<<endl;
         }

      }
}
