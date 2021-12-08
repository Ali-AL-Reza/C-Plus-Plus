#include<bits/stdc++.h>
typedef long long ll;
#define mx 100000001
using namespace std;
bool ar[mx];
vector<int>v;

void solve()
{
         ar[0]=ar[1]=true;
         for(int i=2;i*i<=mx;i++){
                  if(ar[i]==false){
                           for(int j=i*i;j<=mx;j=j+i){
                                 ar[j]=true;

                           }
                  }
         }
         for(int i=2;i<=mx;i++){
                  if(ar[i]==false)v.push_back(i);
         }
}

int main()
{
         solve();
        for(int i=0;i<=v.size();i++){
         if(i%100==0)cout<<v[i]<<endl;
        }
}

