#include<bits/stdc++.h>
using namespace std;
class test
{
    int x,y;
public:
    test()
    {
        cout<<"in..."<<endl;
    }
    test(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    test(test &obj)
    {
        x=obj.x;
        y=obj.y;
    }
    void dis();
};
void test::dis()
{
    cout<<x<<" "<<y<<endl;
}
int main()
{
    test t(5,20);
    test t2(t);
    test t3=t;
    t.dis();
    t2.dis();
    t3.dis();


}
