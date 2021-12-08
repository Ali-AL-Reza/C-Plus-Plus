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
                  bool a0=false,a1=false,a2=false;
                  for(int i=0;i<n;i++){

                           if(s[i]=='1'){
                                    if(a2==false){
                                             cout<<"1";
                                             a2=true;
                                             a1=false;
                                             a0=false;
                                    }
                                    else{
                                           cout<<"0";
                                             a2=false;
                                             a1=true;
                                             a0=false;
                                    }
                           }
                           else{
                                    if(a1==false){
                                             cout<<"1";
                                             a1=true;
                                             a2=false;
                                             a0=false;
                                    }
                                    else{
                                             cout<<"0";
                                             a0=true;
                                             a1=false;
                                             a2=false;
                                    }
                           }
                  }
                  cout<<endl;



         }

}
