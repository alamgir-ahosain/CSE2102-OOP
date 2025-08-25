/*
                ____   Multiple Parameter_____

#include<bits/stdc++.h>
using namespace std;
template<class t1,class t2>
class test
{
public:
    t1 a;
    t2 b;
    test(t1 x,t2 y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<this->a<<" "<<this->b<<endl;
    }
};
int main()
{
    test<int,int>obj(4,6);
    obj.display();
    test<int,char>obj2(4,'c');
    obj2.display();
}
*/

/*

           _________     class _______


#include <iostream>
using namespace std;

class vector
{
    public:
        int *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new int[size];
        }
    int dotProduct(vector &v){
        int d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector v1(3); //vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector v2(3); //vector 2
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}

*/

/*
#include<iostream>
using namespace std;
template<class t>
class vector
{

public:
    t *arr;
    t size;
    vector(t l)
    {
        size=l;
        arr=new int[size];
    }
    void get()
    {
        cout<<"enter "<<size<<" value :";
        for(int i=0; i<size; i++) cin>>arr[i];
    }

    t dot(vector &v2)
    {
        t d=0;
        for(int i=0; i<size; i++)
        {
            d+=this->arr[i]*v2.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<int> v1(3);
    v1.get();

    vector<int> v2(3);
    v2.get();

    int a=v1.dot(v2);
    cout<<a<<endl;
}
*/
/*



            Default _________







#include<iostream>
using namespace std;
template<class t1=int,class t2=float>
class test
{
public:
    t1 a;
    t2 b;
    test(t1 x,t2 y)
    {
        a=x;
        b=y;
    }
    void get()
    {
        cin>>a>>b;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }

};
int main()
{
    test<int,float>obj(3,5.6);
   // obj.get();

    ;
    obj.display();

}


*/

/*



        Function Template_________

template<class t1,class t2>
float funavg(t1 a,t2 b)
{
    float avg=(a+b)/2.0;
    return avg;
}

template<class t>
void swapp( t &a,t &b)
{
   t temp=a;
   a=b;
   b=temp;

}
#include<iostream>
using namespace std;
int main()
{

    float ans;
    ans=funavg(4,5);
    cout<<ans<<endl;

    float ans2;
    ans2=funavg(4,5.5);
    cout<<ans2<<endl;


    int x=10,y=20;
    swapp(x,y);
    cout<<x<<" "<<y<<endl;
}



*/












#include<iostream>
using namespace std;

//template <class T>
//class Harry
//{
//public:
//    T data;
//    Harry(T a)
//    {
//        data = a;
//    }
//    void display()
//    {
//        cout << data;
//    }
//};


/*

                     --------------- template overloading_____


template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T> :: display()
{
    cout<<data<<endl;
}



void func(int a)
{
    cout<<"I am first func() "<<a<<endl;
}

template<class T>
void func(T a)
{
    cout<<"I am templatised func() "<<a<<endl;
}
int main()
{
    Harry<int> h(5.7);
    cout << h.data << endl;
    h.display();
    func(4);
    return 0;
}

*/

//
//* Program: Overloading Function Templates
//* Description: Example of how to overload function templates in C++, combining
//* the benefits of function overloading with the benefits of function templates.

#include <iostream>
using namespace std;

// Create a function template called sum that accepts two parameters and
// returns a value of type parameter T.  The function will return the sum
// of the two parameters, and so the addition operator + must be supported
// by whatever type argument is provided when we use the function template.
template <typename T>
T sum(T a, T b)
{
  cout << "template sum ";
  return a + b;
}

// Create a function template ALSO called sum (i.e. sum is overloaded) that
// works the same as the above function template, except with 3 parameters.
template <typename T,typename T2,typename T3>
T sum(T a, T2 b, T3 c)
{
     cout << "template sum ";
  return a + b + c;
}

// We can continue to overload sum with a non-template function that uses
// two double parameters and a double return value specifically, creating
// a potentially (but not actually) ambiguous situation as to which function
// is called when two double arguments are provided... either the function
// template above that accepts two arguments of some type, OR this non-template
// function that uses type double specifically.
double sum(double a, double b)
{
  cout << "non-template sum ";
  return a + b;
}
double sum(double a ,double b,double c)
{
     cout << "non-template sum ";
    return a+b+c;
}

int main()
{
  // Either our non-template function OR our 1st two-parameter function template
  // could be used here, so which does the compiler choose?  By default in C++
  // the compiler will run the non-template function when there is an ambiguity
  // like this between a function template and a non-template function.  Notice
  // the "non-template sum" in the output.
  cout <<" "<<sum(2.0,3.5)<<endl;

  // At compile-time the compiler will determine that we are using the sum
  // function template that accepts three arguments, and that we are using
  // type double arguments, and it will generate a 'template function' using
  // this function template that uses the type double in-place of T.  That
  // function will then be called at runtime when this statement is executed.
  cout <<" "<< sum(1.0,1,1.4)<<endl;

  // Here when we pass int values to sum, the compiler will use the function
  // template that accepts two arguments as the non-template function accepts
  // double arguments.  As above, the compiler will use the function template
  // to generate at compile-time a type-specific 'template function' that uses
  // the type int, and THAT function will be called at runtime when this
  // statement is executed.
  cout << sum(1,3) << endl;

  // The compiler will use the function template that accepts 3 arguments, but
  // this time it will create the type-specific template function using int as
  // the type.  We've effectively combined the benefits of function templates
  // AND function overloading as we're able to use both a varying number and
  // type of arguments with sum.
  cout << sum(1,3,5) << endl;

  return 0;
}









