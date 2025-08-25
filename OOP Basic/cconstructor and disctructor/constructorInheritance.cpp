#include<bits/stdc++.h>
using namespace std;
class parent
{
    int a,b;
public:
    parent(int p1,int p2)
    {
        a=p1;
        b=p2;

    }
    void show()
    {

        cout<<"the value of parent class  "<<a<<" "<<b<<endl;
    }
};
class child:public parent
{
    int x,y;
public:
    child(int p1,int p2,int c1,int c2):parent(p1,p2)
    {

        x=c1;
        y=c2;
    }
     void display()
    {

        cout<<"the value of child class  "<<x<<" "<<y<<endl;
    }

};
int main()
{

    child obj(4,7,2,9);
    obj.show();
    obj.display();

}
