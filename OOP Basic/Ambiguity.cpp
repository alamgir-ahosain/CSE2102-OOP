
/*
#include<bits/stdc++.h>
using namespace std;
class M
{
public:
    void dis()
    {
        cout<<"M"<<endl;
    }
};
class N
{
public:
    void dis()
    {
        cout<<"N"<<endl;
    }
};
class P:public M,public N
{
public:
    void dis()
    {
        M::dis();
        N::dis();
    }
};
int main()
{
    P p;
    p.dis();
}
*/

#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    void dis()
    {
        cout<<"A"<<endl;
    }
};
class B:public A
{
public :
    void dis()
    {
        A::dis();
       cout<<"B"<<endl;
    }

};
int main()
{
    B b;
    b.dis();
   // b.A::dis();
    b.B::dis();
}
