#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int test;
         cin>>test;
         for(int t=0;t<test;t++){
                  int n;
                  cin>>n;
                  string s;
                  cin>>s;
                  int s0=1,s1=1;
                  int bs0=1,bs1=1;
                  for(int i=1;i<n;i++){
                           if(s[i]=='0'){
                                    if(s[i]==s[i-1]){
                                             s0++;
                                    }
                                    else{
                                             s0=1;
                                    }
                                    if(bs0<s0)bs0=s0;
                           }
                           if(s[i]=='1'){
                                    if(s[i]==s[i-1]){
                                             s1++;
                                    }
                                    else{
                                             s1=1;
                                    }
                                    if(bs1<s1)bs1=s1;
                           }
                  }
                  //cout<<bs0<<" "<<bs1<<endl;
                  int ans;
                  if(bs0>bs1)ans=bs0;
                  else ans=bs1;
                  cout<<ans-1<<endl;


         }
}
