/*
Illustrate the concept of inheritance by defining
three classes student, exam and result, where
result is inherited from exam and exam is
inherited from student. write possible
constructors to initialize the values. write a main
function to test the constructor execution by
creating objects.

 */
#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
    // char name[30];
    int x, y;

public:
    student(int r, int s)
    {
        x = r;
        y = s;
    }
};
class exam : public student
{
protected:
    int l, m;

public:
    exam(int p, int q, int r, int s) : student(r, s)
    {
        l = p;
        m = q;
    }
};
class result : public exam
{
    int n, m;

public:
    t(int u, int v, int p, int q, int r, int s) : exam(p, q, r, s)
    {
        n = u;
        m = v;
    }
};
int main()
{

    result t(1, 2, 3, 4, 5, 6);
    return 0;
}
