#include<bits/stdc++.h>
using namespace std;
class student
{
    int roll;
    char name[100];
    public:
    //void get()
    student()
    {
        cin>>roll;
       cin>>name;

    }
    void show()
    {
        cout<<roll<<" "<<name<<endl;
    }



};
int main()
{
    student s;
   // s.get();
    s.show();

}
