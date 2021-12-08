#include<bits/stdc++.h>
typedef long long int lli;
typedef long long ll;
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--){
            string s;
            cin>>s;
            string s2=s;
            char a=s[0];
            char c=s[s.size()-1];
            if(a==c){
                  cout<<"NO"<<endl;
            }
            else {
                  for(int i=0;i<s.size();i++){
                           if(s[i]==a)s[i]='(';
                           else if(s[i]==c){
                                    s[i]=')';
                                   /// s2[i]=')';
                           }
                           else {
                                    s[i]=='(';
                                    s2[i]==')';
                           }
                  }
                  bool ans=false;
                  stack<char>st;
                  for(int i=0;i<s.size();i++){
                           if(s[i]=='(')st.push(s[i]);
                           else{
                                    if(!st.empty()){
                                             st.pop();
                                    }
                                    else {
                                             st.push('(');
                                             break;
                                    }
                           }
                  }
                  if(st.empty()){
                           ans=true;
                           if(ans==true)cout<<"YES"<<endl;
                           else cout<<"NO"<<endl;
                  }
                  else{
                           stack<char>stc;
                           for(int i=0;i<s2.size();i++){
                           if(s2[i]=='(')stc.push(s2[i]);
                           else{
                                    if(!stc.empty()){
                                             stc.pop();
                                    }
                                    else {
                                             stc.push('(');
                                             break;
                                    }
                           }
                  }
                  if(st.empty())cout<<"YES"<<endl;
                  else cout<<"NO"<<endl;

                  }


            }

     }

}
