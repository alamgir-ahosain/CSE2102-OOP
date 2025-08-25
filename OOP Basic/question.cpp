#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    A(){}
    void fun()
    {
        cout<<"Function AAAA"<<endl;
    }
};
class B:public A
{
public:
    B(){}
    void fun()
    {
        cout<<"Function B"<<endl;
    }
};
int main()
{
    A *a;
    B b;
    a=&b;
    a->fun();
}
