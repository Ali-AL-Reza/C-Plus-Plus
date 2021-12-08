#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int prime(int x){

         int i=2;
         for( ;i<=sqrt(x);){
                  if(x%i==0){
                          /// cout<<x<<"%"<<i<<endl;
                           x++;
                           i=2;
                           continue;
                  }
                  i++;

         }
     return x;
}


int main()
{
         int t;
         cin>>t;
         while(t--){
                 int n;
                 cin>>n;
                 int x,y;
                 x=prime(1+n);
                 ///cout<<x<<endl;
                 y=prime(x+n);
                 ///cout<<x<<" "<<y<<endl;
                 cout<<x*y<<endl;


         }


}

