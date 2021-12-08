#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        int test;
        cin>>test;
        for(int t=0;t<test;t++){
         ll n;
           cin>>n;
           if(n<=3)cout<<n-1<<endl;
           else if(n>3){
                  if(n%2==0){
                        cout<<"2"<<endl;

                  }
                  else cout<<"3"<<endl;
           }
        }
}
