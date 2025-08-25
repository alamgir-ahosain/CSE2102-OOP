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

    void total(dis d2)
    {

        dis t;
        //cout<<d2.km<<" "<<d2.hr<<endl;
        t.km=km+d2.km;
        t.hr=hr+d2.hr;
        cout<<t.km<<" "<<t.hr<<endl;

    }

};
int main()
{
    dis d1;
    d1.get();
    d1.show();
    dis d2;
    d2.get();
    d2.show();
    cout<<"Total Distance ";
    d2.total(d1);

}
