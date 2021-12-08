#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int n,k;
         cin>>n>>k;
         vector<int>v(n),v2(n);
         cin>>v[0];
         int count1=v[0],count2=v[0];
         for(int i=1;i<n;i++){
                  int x;
                  cin>>x;
                  count1=count1+x;
                  if((k-v[i-1]<x))v[i]=x;
                  else v[i]=k-v[i-1];
                  count2=count2+v[i];
         }
         cout<<count2-count1<<endl;
         for(int i=0;i<n;i++){
                  cout<<v[i]<<" ";
         }
}
