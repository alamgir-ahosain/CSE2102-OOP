//   1.A function should be static
//   if it only access static member of class

//  2.A call to a static function does not need an object as handler ,
//  it needs a class name
#include<bits/stdc++.h>
using namespace std;
class test
{
public:

    static void show()
    {

        cout<<"call static member function"<<endl;
    }
};

int main()
{
    test::show();
    return 0;

}

