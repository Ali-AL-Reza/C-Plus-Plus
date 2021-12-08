#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t--){
              int n,k;
              cin>>n>>k;
              for(int i=0;i<n/3;i++){
                  cout<<"abc";
              }
              if(n-((n/3)*3)==2){
                  cout<<"ab";
              }
              else if(n-((n/3)*3)==1){
                  cout<<"a";
              }
             cout<<endl;

        }
}
