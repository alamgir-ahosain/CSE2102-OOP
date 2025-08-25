
#include<bits/stdc++.h>
using namespace std;
class B
{
public:
    void dis()
    {
        cout<<"Dis Base "<<endl;
    }
    virtual void show()
    {
        cout<<"show Base"<<endl<<endl;
    }
};
class D:public B
{
public:
    void dis()
    {
        cout<<" Dis Derived "<<endl;
    }
    virtual void show()
    {
        cout<<"show Derived"<<endl;

    }

};
int main()
{
 B b;
 D d;
 B *bptr;

 bptr=&b;
 bptr->dis();
 bptr->show();


 bptr=&d;
 bptr->dis();
 bptr->show();


}
