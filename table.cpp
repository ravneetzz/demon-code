#include<iostream>
using namespace std;
int main()
{
    int n,i=1,ans,limit;
    cout<<"enter n";
    cin>>n;
    cout<<"enter limit";
    cin>>limit;
    while(i<=limit)
    {ans=n*i;
        cout<<n<<"*"<<i<<"="<<ans<<endl;
        i++;
    }
}
