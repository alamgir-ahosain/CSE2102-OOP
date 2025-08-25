#include<bits/stdc++.h>
using namespace std;

float area(float r)
{
        return(3.14 * r * r);
}
int area(int  b,int h )
{
        return(0.5 * b * h);
}
long long area(long long l,long long b)
{
        return (l * b);
}



int main()
{

    int radious,base,high,l,b;
    int choice;
    do
    {
        cout<<"1. Area of Circle"<<endl;
        cout<<"2. Area of Triangle"<<endl;
        cout<<"3. Area of Rectangle"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            cout<<"Enter Radious of circle:";
            cin>>radious;
            cout<<"Area of  Circle:"<<area(radious)<<endl;
            break;


        }
        case 2:
        {
            cout<<"Enter Base and hight of Traiangle";
            cin>>base>>high;
            cout<<"Area of Triangle:"<<area(base,high)<<endl;
            break;

        }
        case 3:
        {

            cout<<"\n Enter sides of the rectangle: ";
            cin>>l>>b;
            cout<<"\n Area of Rectangle : "<<area(l,b)<<endl;
            break;
        }
        case 4:
            exit(0);
        default:
            cout<<"Error"<<endl;






        }



    }
    while(choice!=4);
    return 0;



}
