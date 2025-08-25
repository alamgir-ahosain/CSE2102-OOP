/*
A phone number, such as (212) 767-8900, can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900). Write a program that uses a
structure to store these three parts of a phone number separately. Call the structure
phone. Create two structure variables of type phone. Initialize one, and have the user
input a number for the other one. Then display both numbers. The interchange might
look like this:

Enter your area code, exchange, and number: 415 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212
*/
/*
#include<iostream>

using namespace std;

struct phone
{
    int areacode, exchange, number;
};
void dis(phone phone2)
{
        cout << "Your number is (" << phone2.areacode << ") " << phone2.exchange << "-" << phone2.number << endl;

}
int main()
{
    phone phone1, phone2;

    phone1.areacode = 212;
    phone1.exchange = 767;
    phone1.number = 8900;

    cout << "Enter your areacode, exchange, and number: ";
    cin >> phone2.areacode >> phone2.exchange >> phone2.number;

    dis(phone2);
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
struct phone
{
    int ar,ex,num;
};
struct phone get()
{
    struct phone p;
 cout<<"enter area ,exchance & number: ";
 cin>>p.ar>>p.ex>>p.num;
 return p;
}
void dis(struct phone p)
{
    cout<<p.ar<<" "<<p.ex<<" "<<p.num<<endl;
}
int main()
{
    struct phone p,p2;
    p=get();
    p2=get();
    dis(p);
    dis(p2);
}
