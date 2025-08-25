o
/*         .........in private inheritance


1. the public and protected  member of the base class become
the private member of the derived class

2. the public and protected member of the base class can only
be accessed inside the derived class but private member of the base
class cannot be accessed inside the derived class

3. the object of the derived class cannot access any number
of the base class

*/


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
class child:private parent
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

    child obj;
    obj.input();
    obj.show();


    /*cout<<"Enter value of c";
    cin>>obj.c;
    */
}

