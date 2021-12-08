#include<bits/stdc++.h>
using namespace std;
int main()
{
       int test;
       scanf("%d",&test);
       for(int t=0;t<test;t++){
         int a,b;
         scanf("%d%d",&a,&b);
         int one=0;
         vector<int>v;
         string s;
         cin>>s;
        for(int i=0;i<s.size();i++){
                  if(s[i]=='1'){
                           one++;
                           v.push_back(i);
                  }
         }
         /****
         char ch;
         int i=0;
         while(~scanf("%c",&ch)){
                           i++;
                  if(ch=='1'){
                           one++;
                           v.push_back(i);
                  }
         }*/
         int pa=0;
         for(int i=0;i<v.size()-1;i++){
                  int current=v[i+1]-v[i]-1;
                  pa=pa+(current*(a+b));
         }
         cout<<min((one*a),pa)<<endl;

       }
}


