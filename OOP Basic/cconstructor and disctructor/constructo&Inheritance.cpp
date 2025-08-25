#include<bits/stdc++.h>
using namespace std;
class parent
{
public:
    parent()
    {

        cout<<"constructor of parent class"<<endl;
    }
    ~parent()
    {
        cout<<"Destructor of parent class"<<endl;
    }
};
class child1:public parent
{
public:
    child1()
    {

        cout<<"constructor of child1 class"<<endl;
    }
    ~child1()
    {
        cout<<"Destructor of child1 class"<<endl;
    }

};
class child2:public child1
{
public:
    child2()
    {

        cout<<"constructor of child2 class"<<endl;
    }
    ~child2()
    {
        cout<<"Destructor of child2 class"<<endl;
    }

};
int main()
{
    child2 c;

}
