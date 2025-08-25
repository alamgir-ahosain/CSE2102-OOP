/*

#include<bits/stdc++.h>
using namespace std;
class test
{
    int roll;
    string s;
public:
    void get()
    {
        cout<<"Enter name and roll ";
        cin>>s>>roll;
    }
    void show()
    {
        cout<<s<<" "<<roll<<endl;
    }
};
int main()
{
    test s[4];
    for(int i=0;i<4;i++)
    {
        s[i].get();
    }
    for(int i=0;i<4;i++)
    {
        s[i].show();
    }
}


*/
#include <iostream>
using namespace std;
int cnt = 0;
class item
{
    int code[100];
    float price[1000];

public:
    void get();
    void disSum();
    void removE();
    void disItem();
};
void item::get()
{
    cout << "enter item code and item price : ";
    cin >> code[cnt] >> price[cnt];
    cnt++;
}
void item::disSum()
{
    int sum = 0;
    for (int i = 0; i < cnt; i++)
    {
        sum = sum + price[i];
    }
    cout << "sum " << sum << endl;
}
void item::removE()
{
    int rem;
    cout << "enter remove item :";
    cin >> rem;
    for (int i = 0; i < cnt; i++)
    {
        if (rem == code[i])
        {
            code[i] = -1;
            break;
        }
    }
}
void item::disItem()
{
    for (int i = 0; i < cnt; i++)
    {
        cout << "code :" << code[i] << " "
             << "price :" << price[i] << endl;
    }
}
int main()
{
    item obj;
    int ch;
    cout << "1.add " << endl;
    cout << "2.sum " << endl;
    cout << "3.remove " << endl;
    cout << "4.disItem " << endl;
    while (1)
    {
        printf("enter choice :");
        cin >> ch;
        switch (ch)
        {
        case 1:
            obj.get();
            break;
        case 2:
            obj.disSum();
            break;
        case 3:
            obj.removE();
            break;
        case 4:
            obj.disItem();
            break;
        }
    }
}
