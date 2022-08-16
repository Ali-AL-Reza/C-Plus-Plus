#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    char arr[n+1][m+1];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='1')count++;
        }
        arr[i][m]=count%2==1?'1':'0';
    }

    for(int i=0;i<=m;i++){
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j][i]=='1')count++;
        }
        arr[n][i]=count%2==1?'1':'0';
    }


    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
