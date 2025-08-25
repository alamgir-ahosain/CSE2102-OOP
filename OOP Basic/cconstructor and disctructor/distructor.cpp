#include<iostream>
using namespace std;
int i=0,j=0;
class Test
{

public:



    Test()
    {

        i++;
        cout<<"\n Constructor executed"<<i;


    }

    ~Test()
    {


        cout<<"\n Destructor executed"<<i;
        i--;

    }
};

main()
{
    Test t,t1,t2,t3;
    return 0;
}


