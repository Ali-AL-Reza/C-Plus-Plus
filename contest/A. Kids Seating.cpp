#include<bits/stdc++.h>
using namespace std;
int main()
{
        int test;
        cin>>test;
        for(int t=0;t<test;t++){
         int n;
         cin>>n;
         int ans=4*n-2;
         for(int i=0;i<n;i++){

                  cout<<ans<<" ";
                  ans=ans-2;
         }
         cout<<endl;
        }
}
