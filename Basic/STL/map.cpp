/** user input map*/
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int>m;
    map<char,int>::iterator it;
    char a;
    int b,n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a>>b;
        m.insert(pair<char,int>(a,b));
    }
    cout<<endl;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}

