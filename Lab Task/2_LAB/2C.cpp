/*
Write a c++ program with two inline functions for calculating multiplication and
cube of number x and y.
Output
Enter two values: 5 7
Multiplication value is: 35
Cube value is: 125 343
 */
#include <bits/stdc++.h>
using namespace std;
/* inline int mul(int a,int b)
{
    return a*b;
}
inline int cube(int a)
{
    return a*a*a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<mul(a,b)<<endl;
    cout<<cube(a)<<" "<<cube(b);
} */
class line
{
    int a, b;

public:
    inline int mul(int x, int y)
    {
        return x * y;
    }
    inline int cube(int a)
    {
        return a * a * a;
    }
};
int main()
{
    int a, b;
    cin >> a >> b;
    line M, C;
    cout << M.mul(a, b) << endl;
    cout << C.cube(a) << " " << C.cube(b);
}