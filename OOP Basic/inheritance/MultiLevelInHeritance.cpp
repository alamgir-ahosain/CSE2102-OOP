#include<iostream>
using namespace std;
class Roll
{
protected:

    int roll;
public:
    void Rget()
    {
        cout<<"enter roll::";
        cin>>roll;
    }
    void rollDis()
    {
        cout<<"roll:"<<roll<<endl;
    }
};
class sub:public Roll
{
protected:

    int x,y;
public:
    void get()
    {
        cout<<"enter two subject mark:";
        cin>>x>>y;
    }
    void subDis()
    {
        cout<<x<<" "<<y<<endl;
    }
};
class total:public sub
{

public:
    void totalDis()
    {
          Rget();
          get();
       int tot=x+y;
        rollDis();
        subDis();
        cout<<"total :"<<tot<<endl;



    }
};
int main()
{
    total t;
    t.totalDis();
}
