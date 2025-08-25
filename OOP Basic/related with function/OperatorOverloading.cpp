

/*
#include<bits/stdc++.h>
using namespace std;
class test
{
    int n;
public:
    test():n(0){}
    void operator++()
    {
        ++n;
    }
    void operator--()
    {
        --n;
    }
    void operator++(int)
    {
        n++;
    }
    void operator--(int)
    {
        n--;
    }
    void show()
    {
        cout<<n<<endl;
    }

};
int main()
{
    test obj;
    ++obj;
    obj.show();
    --obj;
    obj.show();
    obj++;
    obj.show();
    obj--;
    obj.show();
}
*/
#include<bits/stdc++.h>
using namespace std;
class test
{
    int n;
public:
    test():n(0){}
    void get()
    {
        cout<<"enter n:";
        cin>>n;
    }
    void dis()
    {
        cout<<n<<endl;
    }
    test operator+(test y)
    {
        test s;
        s.n=n+y.n;
        return s;
    }
   test operator-(test y)
    {
        test s;
        s.n=n-y.n;
        return s;
    }

};
int main()
{

    test x,y;
    x.get();
    y.get();
    x.dis();
    y.dis();
    test sum=x+y;
    cout<<"sum:";
    sum.dis();
    test sub;
    cout<<"subtraction:";
    sub=x-y;
    sub.dis();
}




























