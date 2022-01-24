#include<iostream>
#include<string.h>
using namespace std;
class demo
{
private:
    char a[50];
public:
    demo()
    {
        cout<<endl<<"enter string";
        cin>>a;
    }
    void operator +(char p[50])
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
}
