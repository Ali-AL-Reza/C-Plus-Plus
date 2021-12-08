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
             int first=0,last=0,q=0;
             if(s.size()%2==1 || s[0]==')' || s[s.size()-1]=='('){
                  cout<<"NO"<<endl;
             }
             else{
                           //cout<<"else"<<endl;

                  for(int i=0;i<s.size();i++){
                           if(s[i]=='(')first++;
                           else if(s[i]==')')last++;
                           else q++;
                  }
                  int qa=q-abs(first-last);
                  if((abs(first-last)-q)==0 || (qa>0 && qa%2==0))cout<<"YES"<<endl;
                  else cout<<"NO"<<endl;
             }

       }

}
