#include<bits/stdc++.h>
using namespace std;
class dis
{
    int km,hr;
public:
    dis()
    {
        km=0;
        hr=0;
    }
    void get()
    {

        cout<<"Enter km and Hour ";
        cin>>km>>hr;
    }

    void show()
    {
        cout<<km<<" "<<hr<<endl;
    }

    dis total(dis d2)
    {

        dis t;
        t.km=km+d2.km;
        t.hr=hr+d2.hr;
        return t;
    }

};
int main()
{
    dis d1,d2,d3;
    d1.get();
    d1.show();

    d2.get();
    d2.show();
    cout<<"Total Distance ";

    d3=d1.total(d2);
    d3.show();

}
