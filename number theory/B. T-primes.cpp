#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool prime_check(ll n)
{
           if(n==1)return false;
           else if(n==2)return true;
           else{
                      ll root=(ll)sqrt(n);
                      for(ll i=3;i<root;i=i+2){
                                 if(n%i==0)return false;
                      }
           }
           return true;

}
int main()
{
        ll t;
        cin>>t;
        for(int i=0;i<t;i++){
           ll n;
           cin>>n;
           if(n%2==0 && (n!=4))cout<<"NO"<<endl;
           else{
                      bool check=prime_check(n);
                      ll root=(ll)sqrt(n);
                      if(check==true && (root * root)==n)cout<<"YES"<<endl;
                      else cout<<"NO"<<endl;
           }
        }
        return 0;
}

