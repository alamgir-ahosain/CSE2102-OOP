/*
Write a c++ program to demonstrate enumeration.
Output
Enter the day: Friday
Today is Off day
Enter the day: Monday
Today is working day 
 */
#include <bits/stdc++.h>
using namespace std;

enum weekDay {Saturday ,Sunday, Monday, Tuesday, Wednesday, Thursday, Friday};
int main()
{

    string day;
    cout << "Enter the day: ";
    cin>>day;
    weekDay today;
    if(day=="Saturday") today=Saturday;
    else if (day == "Sunday") today= Sunday;
    else if(day=="Monday") today=Monday;
    else if(day=="Tuesday") today=Tuesday;
    else if(day=="Wednesday") today=Wednesday;
    else if(day=="Thursday") today=Thursday;
    else if(day=="Friday") today=Friday;
    else
    {
        cout<<"Error"<<endl;
        return 0;
    }

    //Saturday,Sunday,Friday is Off Day
    if (today == Monday|| today == Tuesday|| today == Wednesday|| today == Thursday)
        cout << "Today is working day" <<endl;
    else cout<<"TOday is off Day"<<endl;




}
