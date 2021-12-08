#include<bits/stdc++.h>
using namespace std;
int main()
{

         int test;
         scanf("%d\n",&test);///\n must here
         for(int t=1;t<=test;t++){
                  string s1,s2,s3,s4;
                  getline(cin,s1);
                  getline(cin,s2);
                  for(int i=0;i<s1.size();i++){
                            if(isupper(s1[i]))s1[i]=tolower(s1[i]);
                           if(s1[i]!=' ')s3.push_back(s1[i]);
                  }
                  for(int i=0;i<s2.size();i++){
                           if(isupper(s2[i]))s2[i]=tolower(s2[i]);
                           if(s2[i]!=' ')s4.push_back(s2[i]);
                  }
                  sort(s3.begin(),s3.end());
                  sort(s4.begin(),s4.end());

                  if(s3==s4)printf("Case %d: Yes\n",t);
                  else printf("Case %d: No\n",t);

         }
}
