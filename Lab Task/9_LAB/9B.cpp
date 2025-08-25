/*
2. Consider an abstract class shape that have two
member functions draw and area. Now override
the draw and area function in the class circle,
rectangle and square.
*/

#include <bits/stdc++.h>
using namespace std;
class shape
{
public:
    virtual void draw() = 0;
    virtual void Area() = 0;
};

class circle : public shape
{
public:
    void draw()
    {
        cout << "the shape is circle" << endl;
    }
    void Area()
    {
        cout << "Enter cicle Radious :" << endl;
        int r;
        cin >> r;
        cout << "Area " << (3.1416 * r * r) << endl;
    }
};

class rectangle : public shape
{
public:
    void draw()
    {
        cout << "the shape is rectanle" << endl;
    }
    void Area()
    {
        cout << "Enter length and breath:" << endl;
        int l, b;
        cin >> l >> b;
        cout << "Area " << (l * b) << endl;
    }
};
class square : public shape
{
public:
    void draw()
    {
        cout << "the shape is sqare" << endl;
    }
    void Area()
    {
        int val;
        cout << "Enter a  number ";
        cin >> val;
        cout << "Area=" << val * val << endl;
    }
};
int main()
{
    circle c1;
    c1.draw();
    c1.Area();
    rectangle r1;
    r1.draw();
    r1.Area();
    square s1;
    s1.draw();
    s1.Area();
}
