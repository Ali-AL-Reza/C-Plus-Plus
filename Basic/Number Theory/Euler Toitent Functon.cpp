#include<bits/stdc++.h>
#define REP(i,n) for(int i=1;i<=n;i++)
#define p 1000000007
#define N 1000001
typedef long long int ll;
using namespace std;

int phi(int n){
    int res=n;
    for(int i=2;i*i<=n;i++){
         if(n%i==0){
                  res=res/i;
                  res=res*(i-1);

                  while(n%i==0)n=n/i;
         }
    }
    if(n>1){
         res=res/n;
         res=res*(n-1);
    }

    return res;

}

int main()
{
         int t,n;
         cin>>t;
         while(t--){
                  cin>>n;
                  cout<<"ETF( "<<n<<") = "<<phi(n)<<endl;
         }
}
