#include<iostream>
using namespace std;
class test
{
    int x;
public:
   void get(int z)
   {
       x=z;
   }
   void show()
   {
       cout<<x<<endl;
   }
   test operator++(int)
   {
       test v;
       x++;
       v.x=x;
       return (v);
   }
};
int main()
{
    test t,obj;
    t.get(3);
    t.show();
    obj=t++;
    obj.show();

}
