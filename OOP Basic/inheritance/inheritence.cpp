
// public inherit kora thakle
// public ,protected data member can be access
// in case of object only pulic object can be access
#include<bits/stdc++.h>
using namespace std;
class parent
{
protected:
    int n2;
    int n1;
public:
    void show()
    {

        cout<<n1<<" "<<n2<<endl;
    }

};
class child:public parent
{
public:
    void input()
    {
        cin>>n1;
        cin>>n2;
    }

};
int main()
{

    child obj;
    obj.input();
    obj.show();

}
