/*#include<bits/stdc++.h>
using namespace std;
class A
{
    int x;
public:
    A()
    {

        cin>>x;

    }
    friend class B;
};
class B
{
public:
    void display(A &obj)
    {
        cout<<obj.x;}
};
int main()
{
    A obj;
    B obj2;
    obj2.display(obj);
}

#include<bits/stdc++.h>
using namespace std;
class fr
{

    int a,b;
public:
    fr()
    {
        cin>>a>>b;
    }
    friend int add(fr obj);
};
int add(fr obj)
{

    return (obj.a+obj.b);
}
int main()
{

    fr obj;
    cout<<add(obj);
}

*/


// Example: Find the largest of two numbers using Friend Function

#include<bits/stdc++.h>
using namespace std;
class test
{
    int a,b;
public:
    test()
    {
        cout<<"Enter two number ";
        cin>>a>>b;
    }
    friend int largest(test &t);



};
int largest(test &t)
{
    if(t.a>t.b) return t.a;
    else return t.b;
}

int main()
{

    test t;
    cout<<"largest number "<<largest(t);
}










