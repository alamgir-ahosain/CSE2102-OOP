#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    virtual void fun()
    {
        cout<<"The Base Function"<<endl;
    }
};
class derive1:public base
{
    public:
    void fun()
    {
        cout<<"The derive1"<<endl;
    }

};
class derive2:public base
{
    public:
     void fun()
    {
        cout<<"The derive2 Function "<<endl;

    }

};
int main()
{

    base *p,b;
    derive1 d1;
    derive2 d2;
    p=&b;
    p->fun();
    b.fun();

      p=&d1;
    p->fun();
    d1.fun();

      p=&d2;
    p->fun();
    d2.fun();
    return 0;


//.......output...............

//The Base Function
//The Base Function
//The derive1
//The derive1
//The derive2 Function
//The derive2 Function



}
