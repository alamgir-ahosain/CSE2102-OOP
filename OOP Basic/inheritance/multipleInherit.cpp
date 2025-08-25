#include<bits/stdc++.h>
using namespace std;
class student
{
    char name[40],city[40];
public:
    void input_st();
    void show_st();

};
void student::input_st()
{
    cout<<"Enter name :";
    cin>>name;
    cout<<"Enter city: ";
    cin>>city;
}
void student::show_st()
{
    cout<<"Name "<<name<<endl;
    cout<<"City "<<city<<endl;
}

class mark
{
    int math,eng,ban;
public:
    void input_mark();
    void show_mark();
};
void mark::input_mark()
{

    cout<<"Ener math mark ";
    cin>>math;
    cout<<"Ener eng mark ";
    cin>>eng;
    cout<<"Ener ban mark ";
    cin>>ban;
}
void mark::show_mark()
{
    cout<<"Math :"<<math<<endl;
    cout<<"eng:"<<eng<<endl;
    cout<<"ban:"<<ban<<endl;


}
class result:public student,public mark
{
public:
    void show()
    {
        cout<<"Complete result :--"<<endl;
        show_st();
        show_mark();
    }

};
int main()
{
    result obj;

    obj.input_st();
    obj.input_mark();
    obj.show();


}


