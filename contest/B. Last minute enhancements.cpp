#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
           int n;
           cin>>n;
           bool b[(2*n)+2];
           for(int i=0;i<(2*n)+2;i++){
                  b[i]=false;
           }
           int count=0;
           for(int i=0;i<n;i++){
                  int x;
                  cin>>x;
                  if(b[x]==false){
                           count++;
                           b[x]=true;
                  }
                  else if(b[x+1]==false){
                           count++;
                           b[x+1]=true;
                  }

           }
           cout<<count<<endl;


    }


}

