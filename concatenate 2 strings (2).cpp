#include<iostream>
#include<string.h>
using namespace std;
class demo
{public:
    char a[10];
demo()    {
        cout<<"enter string";
        cin>>a;
    }
    void operator + (char p[50])
    {
        strcat(a,p);
    }
    void display()
    {
        cout<<a;
    }
};
int main()
{
    demo obj;
    obj+"world";
    obj.display();
    return 0;
}
