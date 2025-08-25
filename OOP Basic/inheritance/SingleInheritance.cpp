

/*

#include<iostream>
using namespace std;
class B
{
    int a;
public:
    int b;
    void get()
    {
        cin>>a>>b;;
    }
    int  get_a()
    {
        return a;
    }
    void show_a()
    {
        cout<<"a: :"<<a<<endl;
    }

};
class D:public B
{
    int c;
public:
    void mul()
    {
        c=b*get_a();
    }
    void dis()
    {
        cout<<"a :"<<get_a()<<endl;
        cout<<"b :"<<b<<endl;
        cout<<"c :"<<c<<endl;

    }
};
int main()
{
    D d;
    d.get();
    d.mul();
    d.dis();
    d.b=20;
    d.mul();
    d.dis();

}

*/

//      ......private inherited inheritated hole ......
// >>>Member function<<<<<  dara access korte hobe.

#include<iostream>
using namespace std;
class B
{
    int a;
public:
    int b;
    void get()
    {
        cin>>a>>b;;
    }
    int  get_a()
    {
        return a;
    }
    void show_a()
    {
        cout<<"a: :"<<a<<endl;
    }

};
class D:private B
{
    int c;
public:
    void mul()
    {
        get();
        c=b*get_a();
    }
    void dis()
    {
      show_a();
        cout<<"b :"<<b<<endl;
        cout<<"c :"<<c<<endl;

    }
};
int main()
{
    D d;
   d.mul();
   d.dis();
}
























