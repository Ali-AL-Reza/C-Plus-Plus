#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 vector<ll>v;
void primedivisor(ll n,ll x,ll i)
{
         if(i<=sqrt(n)+1){
                  if(n%i==0 && (i%x !=0)){
                         v.push_back(i);
                         //cout<<i<<"  ";

                  }
                  primedivisor(n,x,i+1);
         }
}

int main()
{
        int test;
        scanf("%d",&test);
        for(int t=0;t<test;t++){
         ll n,x;
         scanf("%lld%lld",&n,&x);
         if(n%x!=0){
                  printf("%lld\n",n);
         }
         else{
                  //cout<<"fun"<<endl;
                  v.clear();
                  primedivisor(n,x,1);
                  cout<<v[v.size()-1]<<endl;
         }


        }
        return 0;
}
