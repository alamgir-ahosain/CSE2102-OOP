/*
Write a program to overload +, ==, &lt;= and &gt;= operators for string operation.
Input: abc def
Output: After comparing two string---
2 nd string is greater than 1 st
Input: def aef
Output: After comparing two string---
1 st string is greater than 2 nd
Input: def def
Output: After comparing two string---
Two strings are equal.
Input: def def
Output: After concatenating two string---
defdef
 */

#include <bits/stdc++.h>
using namespace std;
class compare
{

public:
    char str[25];
    void get()
    {
        char ch[100];
        //cout << "enter a string:";
        cin >> ch;
        strcpy(str, ch);
    }
    void dis()
    {
        cout << str << endl;
    }
    int operator==(compare s2)
    {
        if (strcmp(str, s2.str))
            return 0;
        else
            return 1;
    }
    int operator>=(compare s3)
    {
        if (strlen(str) >= strlen(s3.str))
            return 1;
        else
            return 0;
    }
    int operator<=(compare s3)
    {
        if (strlen(str) <= strlen(s3.str))
            return 1;
        else
            return 0;
    }
    compare operator+(compare s1)
    {
        compare s3;
        strcat(str, s1.str);
        strcpy(s3.str, str);
        return s3;
    }
};
void compareString(compare s1, compare s2)
{
    if (s1 == s2)
        cout << "Equal" << endl;
    else
    {
        cout << "Not Equal" << endl;
        if (s1 >= s2)
            cout << s1.str << " is greater than " << s2.str << endl;
        if (s1 <= s2)
            cout << s2.str << " is greater then " << s1.str << endl;
    }
}
int main()
{
    compare s, s1;
    s.get();
    s1.get();
    s.dis();
    s1.dis();
    compareString(s, s1);
    compare s2 = s + s1;
    s2.dis();
}
