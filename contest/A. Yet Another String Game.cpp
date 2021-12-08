#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--){
               string s;
               cin>>s;
               string s1="abcdefghijklmnopqrstuvwxyz";
               for(int i=0;i<s.size();i++){
                  if(i%2==0){
                         ///alice small
                         for(int j=0;j<s1.size();j++){
                           if(s[i]!=s1[j]){
                                    cout<<s1[j];
                                    break;
                           }
                         }

                  }
                  else{
                          for(int j=s1.size()-1;j>=0;j--){
                           if(s[i]!=s1[j]){
                                    cout<<s1[j];
                                    break;
                           }
                          }
                  }

               }
               cout<<endl;


         }


}
