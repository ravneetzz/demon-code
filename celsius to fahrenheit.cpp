#include<iostream>
using namespace std;
int main()
{
    float cel[10]={3,4,5,6,7,8,9,0,1,2},faren[10];
    int i;
        for(i=0;i<=9;i++)
        {
            faren[i]=cel[i]*(9/5.0)+32;
        }
        for(i=0;i<=9;i++)
        {
            cout<<"\n"<<cel[i]<<"="<<faren[i];
        }
        return 0;
}
