#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define endl '\n'
#define mod (int)1e9+7
using namespace std;

string T,P;
int length_p,length_t;

bool match(int left)
{
         for(int i=0;i<length_p;i++)
         {
                  if(T[left+i]!=P[i])return false;
         }
         return true;
}
int main()
{
         int t;
         cin>>t;
         cin.ignore();
         while(t--)
         {
                  getline(cin,T);
                  getline(cin,P);
                  length_p=P.size();
                  length_t=T.size();
                  for(int l=0;l<=length_t-length_p;l++)
                  {
                           if(match(l))cout<<l<<" ";
                  }
                  cout<<endl;


         }

}



