#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(iint i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
int main()
{
         map<string,int>mp;///map e sort kora thake
         /// unordered_map<string,int>mp ///without sort
         ///multimap<string,int>mp with duplicate value
         int n;
         cin>>n;
         for(int i=1;i<=n;i++)
         {
                  string s;
                  cin>>s;
                  mp[s]++;
         }
         map<string,int>::iterator it=mp.begin();
         for(it=mp.begin();it!=mp.end();it++)
         {
                  cout<<(*it).first<<" "<<(*it).second<<endl;
         }

         it=mp.find("e");
         if(it==mp.end())cout<<"NOt Found"<<endl;
         else cout<<(*it).first<<" "<<(*it).second<<endl;

         mp.erase(it);
         cout<<endl;
         for(it=mp.begin();it!=mp.end();it++)
         {
                  cout<<(*it).first<<" "<<(*it).second<<endl;
         }

}

