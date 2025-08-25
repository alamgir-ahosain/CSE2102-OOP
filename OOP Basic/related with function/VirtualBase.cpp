#include<bits/stdc++.h>
using namespace std;
class student
{
protected:
    int roll;
public:
    void get()
    {
        cout<<"enter roll:";
        cin>>roll;
    }
    void disR()
    {
        cout<<roll<<endl;
    }
};
class test:virtual public student
{
protected:
    float x,y;
public:
    void getM()
    {
        cout<<"enter two mark:";
        cin>>x>>y;
    }
    void disM()
    {
        cout<<x<<" "<<y;
    }

};
class sports:public virtual student
{
protected:
    float sc;
public:
    void getS()
    {
        cout<<"enter score:";
        cin>>sc;
    }
    void disS()
    {
        cout<<sc<<endl;
    }
};
class result:public test,public sports
{
    float tot;
public:
    void dis()
    {
        tot=x+y+sc;
        disR();
        disM();
        disS();
        cout<<tot<<endl;
    }
};

int main()
{
    result r;
    r.get();
    r.getM();
    r.getS();
    r.dis();
}
