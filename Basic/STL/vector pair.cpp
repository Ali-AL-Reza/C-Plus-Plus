/** vector sort operation */
#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<string,int> a, const pair<string,int> b)
{
    return (a.second <b.second);
}
int main()
{
    int n;
    string s;
    int x;
    cout<<"How many:"<<endl;
    cin>>n;
    vector<pair<string ,int> >v(n);
    vector<pair<string ,int> >::iterator it;
    for(int i=0;i<n;i++){

        cin>>s>>x;
        v.push_back(make_pair(s,x));/// এখানে " s" হব্রে না।
    }
    cout<<"Before sort with first element:"<<endl;
    for(it=v.begin();it!=v.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"After sort with first element:"<<endl;
    sort(v.begin(),v.end());
     for(it=v.begin();it!=v.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"vector sort with second element:"<<endl;
    sort(v.begin(),v.end(),sortbysec);
     for(it=v.begin();it!=v.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;

    reverse(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++)cout<<it->first<< " "<<it->second<<endl;

    it=v.begin();

    advance(it,2);
    v.insert(it,make_pair("rexa",20));
    for(it=v.begin();it!=v.end();it++)cout<<it->first<< " "<<it->second<<endl;
    cout<<endl;

    for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;
    cout<<endl;

    advance(it,2);
    v.erase(it);



    return 0;
}

