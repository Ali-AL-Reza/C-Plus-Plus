#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define N 100001
#define mod (int)1e9+7
#define endl '/n'
using namespace std;
vector<int>getlps(string st)
{
         vector<int>lps(st.length());
         int i=0;
         for(int j=1;j<st.length(); )
         {
                  if(st[i]==st[j])lps[j]=i+1,i++,j++;
                  else
                  {
                           if(i!=0)i=lps[i-1];
                           else lps[j]=i,j++;
                  }
         }
         return lps;
}
int main()
{
         string pattern,text;
         cin>>text;
         cin>>pattern;
         ///cout<<text.size()<<"   "<<pattern.size()<<endl;
         string st=pattern+"#"+text;
         vector<int>lps=getlps(st);
         int count=0;
         int x=pattern.size();
         cout<<x<<endl;
         for(int i=pattern.size();i<st.size();i++)
         {
                  ///cout<<i<<"   "<<lps[i]<<" "<<endl;
                  if(lps[i]==pattern.size())count++;
         }
         ///cout<<count<<endl;
}
