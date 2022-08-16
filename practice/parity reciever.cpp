#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y;
    cin>>x>>y;
    n=x-1,m=y-1;

    char arr[x][y];
    char arrR[x][y];



    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>arrR[i][j];
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]=arrR[i][j];
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

bool  ans=true;

    for(int i=n;i<=n;i++)
    {
        for(int j=m;j<=m;j++)
        {
            if(arr[i][j]!=arrR[i][j])ans=false;
        }
    }


    cout<<ans<<endl;








}









//110011000
//110101011
//010101111
//110110110
//100101010


