/*
A point on the two-dimensional plane can be represented by two numbers: an X
coordinate and a Y coordinate. For example, (4,5) represents a point 4 units to
the right of the origin along the X axis and 5 units up the Y axis. The sum of two
points can be defined as a new point whose X coordinate is the sum of the X
coordinates of the points and whose Y coordinate is the sum of their Y
coordinates. Write a program that uses a structure called point to model a point.
Define three points, and have the user input values to two of them. Then set the
third point equal to the sum of the other two, and display the value of the new
point. Interaction with the program might look like this:
Enter coordinates for P1: 3 4
Enter coordinates for P2: 5 7
Coordinates of P1 + P2 are: 8, 11
 */
#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
};

/*
void dis(struct point p1, struct point p2)
{
    struct point p3;

    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    cout << p3.x << " " << p3.y << endl;
}
struct point get()
{
    struct point p1;
    cin >> p1.x >> p1.y;
    return p1;
}
int main()
{
    struct point p1, p2, p3;
    p1 = get();
    p2 = get();
    dis(p1, p2);
    // cout<<"Coordinates of P1 + P2 are:"<<p3.x<<", "<<p3.y<<endl;
}*/
int main()
{
   struct point p1, p2, p3;

   //  cout << "Enter coordinates for P1 : \n";
   cin >> p1.x >> p1.y;
   // cout << "Enter coordinates for P2 : \n";
   cin >> p2.x >> p2.y;

   p3.x = p1.x + p2.x;
   p3.y = p1.y + p2.y;
   cout << "Coordinates of P1 + P2 are: " << p3.x << " , " << p3.y << endl;

   return 0;
}