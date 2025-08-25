#include<bits/stdc++.h>
using namespace std;
class test
{
    static int cnt;//static member
public:
    test()
    {
        cnt++;
    }

    //   1.A function should be static
    //   if it only access static member of class

    //  2.A call to a static function does not need an object as handler ,
    //  it needs a class name

    void show()
    {

        cout<<cnt<<" create object"<<endl;
    }
};

int test::cnt=0;


int main()

{
    test t,t2,t3;
    t.show();


}
