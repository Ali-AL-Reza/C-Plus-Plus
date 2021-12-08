#include<bits/stdc++.h>
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--){
                  int n;
                  cin>>n;
                  vector<string>v(n);
                  for(int i=0;i<n;i++){
                           cin>>v[i];
                  }
                  for(int i=0;i<n;i++){
                                    string s=v[i];
                           for(int j=0;j<n;j++){
                                    if(i==j && s[i]!='.')cout<<"0";
                                    else cout<<s[j];
                           }
                           cout<<endl;
                  }

         }
}
