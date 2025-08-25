#include<iostream>
using namespace std;
class item
{
    char name[30];
    int age;
public:
    void get()
    {
        cin>>name>>age;
    }
    void show()
    {
        cout<<name<<" "<<age<<endl;
    }
    item & item::greate(item & x)
    {
        if(x.age>=age) return x;
        else return *this;
    }
};
int main()
{
    item p1,p2,p3;
    p1.get();
    p2.get();
    p3.get();
    item p=p1.greate(p3);
    p.show();
    p=p1.greate(p2);
    p.show();
    return 0;
}
