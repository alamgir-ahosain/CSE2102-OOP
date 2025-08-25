#include<bits/stdc++.h>
using namespace std;
class parent
{
private:
    int a;
protected:
    int b;
public:
    int c;
};
class child:public parent
{

public:
    void input()
    {

        // cout<<"A "<<a;//access kora jabe na
        cout<<"b ";
        cin>>b;
        cout<<"c ";
        cin>>c;
    }
    void show()
    {

        cout<<b<<" "<<c<<endl;
    }

};
int main()
{

    child c;
    c.input();
    c.show();
}
