#include<bits/stdc++.h>
using namespace std;
class over
{
    int num;

public:
    over()
    {

        cout<<"Default Constructor"<<endl;
    }
    over(int n)
    {

        num=n;
        cout<<"Value ";
    }
    void show()
    {

        cout<<num<<endl;
    }

};
int main()
{
    over v;
    over v2(7);
    v2.show();



}

