//these are data variable in class whice  are made const
//they are not   initialized during declartion
//their initilization occur in in the conostructor
#include<bits/stdc++.h>
using namespace std;
class test
{
private:
    const int n;
public:
    test():n(0){}

    void set(int x)
    {
        //n=x;
        cout<<n<<endl;

    }
};
int main()
{
    test t;
    t.set(30);

}
