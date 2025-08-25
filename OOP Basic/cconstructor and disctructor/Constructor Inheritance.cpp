#include<bits/stdc++.h>
using namespace std;
class A
{
    int x;
public:
    A(int i)
    {
        x=i;
        cout<<"A"<<endl;
    }
    void showA()
    {
        cout<<x<<endl;
    }
};
class B
{
    int y;
public:
    B(int j)
    {
        y=j;
        cout<<"B"<<endl;

    }
    void showB()
    {
        cout<<y<<endl;
    }
};
class C:public B,public A
{
    int m,n;
public:
    C(int a,int b,int c,int d):A(a),B(b)
    {
        m=c;
        n=d;
        cout<<"C"<<endl;
    }
    void showC()
    {
        cout<<m<<" "<<n<<endl;
    }

};
int main()
{
    C g(1,2,3,4);
    g.showA();
    g.showB();
    g.showC();
}
