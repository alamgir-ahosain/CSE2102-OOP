
#include<bits/stdc++.h>
using namespace std;
class A
{
protected:

    int a;
public:
    void getA()
    {
        cout<<"enter a:";
        cin>>a;
    }
    void disA()
    {
        cout<<a<<endl;
    }
};
class B
{
protected:

    int b;
public:
    void getB()
    {
        cout<<"enter b:";
        cin>>b;
    }
    void disB()
    {
        cout<<b<<endl;
    }
};
class C:public A,public B
{

public:
    void tot()
    {
        cout<<"total:"<<a+b<<endl;
    }
};
int main()
{
    C c;
    c.getA();
    c.getB();
    c.disA();
    c.disB();
    c.tot();
}
