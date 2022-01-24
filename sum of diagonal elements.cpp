#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a[10][10],principalsum=0,secondarysum=0;
    cout<<"enter order of matrix"<<endl;
    cin>>n;
    cout<<"enter elements of matrix";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        cout<<"enter elements of"<<i+1<<j+1;
        cin>>a[i][j];
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
    if(i==j)
    {
        principalsum+=a[i][j];
    }
    if((i+j)==(n-1))
    {
        secondarysum+=a[i][j];
    }
        }
cout<<"sum of principal diagonal"<<principalsum<<endl;
cout<<"sum of secondary diagonal"<<secondarysum<<endl;

}
