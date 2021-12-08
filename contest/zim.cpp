#include<bits/stdc++.h>
using namespace std;
int ar1[]={1,2,3,4,5};
int ar2[]={1,2,3,4,5};
int temp,result=0;
int main()
{

      for(temp=0;temp<3;temp++)result+=ar1[temp];
      for(temp=0;temp<4;temp++)result+=ar2[temp];
      cout<<result<<endl;

}
