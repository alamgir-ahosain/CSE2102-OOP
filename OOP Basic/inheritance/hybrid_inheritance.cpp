#include<bits/stdc++.h>
using namespace std;
class student
{
protected:
    int roll;
public:
    void get_roll()
    {
        cout<<"enter roll :";
        cin>>roll;
    }
    void dis_roll()
    {
        cout<<"roll :"<<roll<<endl;
    }
};
class test:public student
{
protected:
    int m1,m2;
public:
    void get_mark()
    {
        cout<<"enter two mark :";
        cin>>m1>>m2;

    }
    void dis_mark()
    {
        cout<<"mark :"<<m1<<" "<<m2<<endl;
    }
};
class sports
{
protected:
    int score;
public:
    void get_score()
    {
        cout<<"enter score :";cin>>score;
    }
    void dis_score()
    {
        cout<<"score :"<<score<<endl;
    }
};
class result:public test,public sports
{
    int total;
public:
    void dis()
    {
        total=m1+m2;
        dis_roll();
        dis_mark();
        dis_score();
        cout<<"total :"<<total<<endl;
    }
};
int main()
{
    result r;
    r.get_roll();
    r.get_mark();
    r.get_score();
    r.dis();
}

