#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
      int test;
      cin>>test;
      for (int t=0;t<test;t++){
         vector<char>v1,v2;
         char c;
         while(scanf("%c", &c) != EOF){
                  if(c=='(' || c==')')v1.push_back(c);
                  else v2.push_back(c);
         }
         int left=0;
         int right=v1.size();
         int count=0;
         while(left<right){
                  if(v1[left]=='(' && v1[right]==')'){
                           count++;
                           left++;
                           right--;
                  }
                  else if(v1[left]=='(' && v1[right]=='(')right--;
                  else left++;
         }
         cout<<count<<endl;
      }
}
