#include<bits/stdc++.h>
typedef long long ll;
#define mx 90000001
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
        int t;
        cin>>t;
        solve();
        for(int i=0;i<t;i++){
         int n;
         cin>>n;
         cout<<v[n-1]<<endl;
        }
}
