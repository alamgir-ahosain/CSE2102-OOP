//#include<iostream>
//using namespace std;
//class B
//{
//    int a;
//public:
//    int b;
//    void get()
//    {
//        a=5;
//        b=10;
//    }
//    int get_a()
//    {
//        return a;
//    }
//    void show()
//    {
//        cout<<"a="<<a<<endl;
//    }
//};
//class D:public B
//{
//    int c;
//public:
//
//    void mul()
//    {
//        c=b*get_a();
//
//    }
//    void dis()
//    {
//        cout<<"a="<<get_a()<<endl;
//        cout<<"b="<<b<<endl;
//        cout<<"c="<<c<<endl;
//
//    }
//
//};
//int main()
//{
//    D d;
//    d.get();
//    d.mul();
//    d.show();
//    d.dis();
//    d.b=20;
//    d.mul();
//    d.dis();
//
//}


#include<iostream>
using namespace std;
class student
{
protected:
    int roll;
public:
    void get_num(int);
    void put_num();
};
void student::get_num(int a)
{
    roll=a;
}
void student::put_num()
{
    cout<<"Roll "<<roll<<endl;
}
class test:public student
{
protected:
    float sub1;
    float sub2;
public:
    void get_mark(float x,float y)
    {
        sub1=x;
        sub2=y;
    }
    void put_mark()
    {
        cout<<sub1<<" "<<sub2<<endl;
    }

};
class result:public test
{
    float total;
public:
    void dis()
    {
        total=sub1+sub2;
        put_num();
        put_mark();
        cout<<"total "<<total<<endl;
    }
};
int main()
{
    result r;
    r.get_num(111);
    r.get_mark(75.0,59.5);
    r.dis();
    return 0;

}














