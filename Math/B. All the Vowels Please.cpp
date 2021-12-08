#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
int main()
{
         int n;
         cin>>n;
         int row=0,column=0;
         if(n<25)cout<<-1<<endl;
         else
         {
                 for(int i=5;i*i<=n;i++)
                 {
                          if(n%i==0 and n/i >=5){
                                    row=i,column=n/i;
                                    break;
                          }
                 }
                 if(column==0)cout<<-1<<endl;
         else{
         string s="aeiou";
         for(int i=0;i<row;i++)
         {
                  for(int j=0;j<column;j++)
                  {
                           cout<<s[(i+j)%5];
                  }
         }
         cout<<endl;}
         }
}

