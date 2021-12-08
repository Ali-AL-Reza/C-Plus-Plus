#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define mod (int)1e9+7
#define N 1000001
using namespace std;
vector<int>ConstructTempArray(string pattern)
{
         vector<int> lps(pattern.length());
         int i=0;
         for(int j=1;j<(int)pattern.length();)
         {
                  if(pattern[j]==pattern[i])lps[j]=i+1,i++,j++;
                  else
                  {
                           if(i!=0)i=lps[i-1];
                           else lps[j]=i,j++;
                  }
         }
         return lps;

    /***vector<int> lps(pattern.length());
    int index = 0;
    for (int i = 1; i < (int) pattern.length(); ) {
        if (pattern[i] == pattern[index]) lps[i] = index + 1, index++, i++;
        else {
            if (index != 0) index = lps[index - 1];
            else lps[i] = index, i++;
        }
    }
    return lps;***/
}
void KMPMultipleTimes(string text, string pattern)
{
         bool found=false;
         vector<int>lps= ConstructTempArray(pattern);
        /// for(int x=0;x<lps.size();x++)cout<<lps[x]<<" ";
         cout<<endl;
         int i=0,j=0;
         while(i<(int)text.length())
         {
                  if(text[i]==pattern[j])i++,j++;
                  else
                  {
                           if(j!=0)j=lps[j-1];
                           else i++;
                  }
                  if(j==(int)pattern.length())
                  {
                           cout<<"Found Match At "<<i-pattern.length()<<endl;
                           j=lps[j-1];
                           found=true;
                  }
         }
         if(!found)cout<<"Not Found:"<<endl;
}
int main()
{
        /// cin.ignore();
       /// cin.tie(NULL);
        string text,pattern;
        ///getline(cin,text);
        ///getline(cin,pattern);
        cin>>text;
        cin>>pattern;
        KMPMultipleTimes(text,pattern);
}
