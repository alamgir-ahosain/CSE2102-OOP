#include <bits/stdc++.h>
using namespace std;

    /*

    Raising a number n to a power p is the same as multiplying n by itself p times.
    Write a function called power () that takes a double value for n and an int value
    for p, and returns the result as double value. Use a default argument of 2 for p,
    so that if this argument is omitted, the number will be squared. Write a main ()
    function that gets values from the user to test this function.
    */

double Power(double n, int p = 2)
{
    double ans = 1;
    for (int i = 1; i <= p; i++)
    {
        ans *= n;
    }
    return ans;
}

int main()
{
    double n;
    int p;
    cin >> n >> p;
    cout << Power(n, p) << endl;
    cout << Power(n);
}
