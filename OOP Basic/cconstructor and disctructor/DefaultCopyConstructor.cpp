#include<bits/stdc++.h>
using namespace std;
class student
{
    int roll,mark;
    //char name[40];
    string name;
public:
    void get()
    {
        cout<<"Enter Roll ";
        cin>>roll;
        cout<<"Enter Mark ";
        cin>>mark;
        cout<<"Enter name ";
        cin.ignore();
        getline(cin,name);
    }
    void show()
    {

        cout<<roll<<" "<<mark<<" "<<name<<endl;
    }


};
int main()
{
    student s1;
    s1.get();
    s1.show();
    student s2;
    s2=s1;
    s2.show();
}

