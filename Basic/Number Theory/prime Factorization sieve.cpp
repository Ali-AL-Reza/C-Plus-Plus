#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int ar[1000001];

void sieve()
{
         ll maxn=1000001;
         for(int i=1;i<=maxn;i++)ar[i]=-1;

         for(int i=2;i<=maxn;i++){
                  if(ar[i]==-1){
                           for(int j=i;j<=maxn;j=j+i){
                                    if(ar[j]==-1){
                                             ar[j]=i;
                                    }
                           }
                  }
         }
}

int main()
{
         sieve();
        int n;
        cin>>n;
        while(n){
         if(n>0 && ar[n]!=-1)cout<<ar[n]<<"*";
         if(ar[n]==-1 && n!=1)cout<<n<<endl;
         n=n/ar[n];

        }


}
