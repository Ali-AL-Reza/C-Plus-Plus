#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int test;
         scanf("%d",&test);
         for(int i=0;i<test;i++){
                  int a,b,c,d;
                  cin>>a>>b>>c>>d;
                  cout<<max(a+b,c+d)<<endl;
         }
}
