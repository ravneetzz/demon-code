#include<iostream>
using namespace std;
int main()
{
    int a[10][10];
    int b[10][10];
    int sum[10][10];
    int r,c,i,j;
    cout<<"no of rows"<<endl;
    cin>>r;
    cout<<"no of columns"<<endl;
    cin>>c;
    cout<<"enter elements of 1st matrix"<<endl;
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {cout<<"elements of a"<<i+1<<j+1;
            cin>>a[i][j];
        }
    cout<<"enter elements of 2nd matrix"<<endl;
    for(i=0;i<r;++i)
    for(j=0;j<c;++j)
        {cout<<"elements of b"<<i+1<<j+1;
            cin>>b[i][j];
        }
    for(i=0;i<r;++i)
       for(j=0;j<c;++j)
       {
           sum[i][j]=a[i][j]+b[i][j];
       }
       cout<<"sum is"<<endl;
    for(i=0;i<r;++i)
       for(j=0;j<c;++j)
       {
           cout<<sum[i][j]<<" ";
    if (j==c-1)
        cout<<endl;
       }
}
