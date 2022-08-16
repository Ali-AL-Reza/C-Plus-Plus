

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string m,p;
    cin>>m;
    cin>>p;
    string em= m;

    for(int i=0;i<=em.length()-p.length();)
    {
        for(int j=0;j<p.length();j++)
        {

            em[i+j]=em[i+j]==p[j]?'0':'1';
        }
          for(;i<em.length() && em[i]!='1';i++);

    }

    cout<<"CRC "<<em.substr(em.length()-p.length()+1)<<endl;
}
