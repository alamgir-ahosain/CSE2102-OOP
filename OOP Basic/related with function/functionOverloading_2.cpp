
//Function overloading is a feature of object-oriented programming
// where two or more functions can have the same name but different parameters.
#include<bits/stdc++.h>
using namespace std;
class test
{
    int x,y;
    public:

    test()
    {

        cin>>x>>y;
    }
    void add(int a,int b)
    {

        cout<<a+b<<endl;
    }
    void add(long long a,long long b)
    {
        cout<<a+b<<endl;
    }
};
int main()
{

test t,t1;
t.add();
t1.add();
}


