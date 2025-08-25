/*

Create a Distance class with
-feet and inches as data member
-member function to input distance
-member function to output distance
-member function to add two distance object
Write a main function to create object of Distance class,input two distance and output the sum
 */
#include<bits/stdc++.h>
using namespace std;
class Distance
{
    float feet,inch;
public:
    void get()
    {
        cout<<"enter feet and inches :";
        cin>>feet>>inch;
    }
    void dis()
    {
        cout<<feet<<" "<<inch<<endl;
    }
    Distance operator+(Distance d1)
    {
        Distance d2;
        d2.inch=inch+d1.inch;
        if(d2.inch>=12)
        {
            d2.inch-=12;
            d2.feet=1;
        }
        d2.feet+=feet+d1.feet;
        return d2;
    }


};
int main()
{
    Distance d,d1,d2;
    d.get();
    d1.get();
    d.dis();
    d1.dis();
    d2=d+d1;
    d2.dis();

}


/*
#include <iostream>

class Distance {
  private:
    int feet;
    int inches;

  public:
    void input() {
      std::cout << "Enter feet: ";
      std::cin >> feet;
      std::cout << "Enter inches: ";
      std::cin >> inches;
    }
    void show() {
      std::cout << feet << "\' " << inches << "\"" << std::endl;
    }
    Distance add(Distance d2) {
      Distance d3;
      d3.inches = inches + d2.inches;
      d3.feet = 0;
      if (d3.inches >= 12) {
        d3.inches -= 12;
        d3.feet++;
      }
      d3.feet += feet + d2.feet;
      return d3;
    }
};

int main() {
  Distance d1, d2, d3;


  std::cout << "Enter first distance: " << std::endl;
  d1.input();

  std::cout << "Enter second distance: " << std::endl;
  d2.input();

  d3 = d1.add(d2);

  std::cout << "Result: ";
  d3.show();

  return 0;
} 
 */