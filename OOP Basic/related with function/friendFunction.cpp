

//  1.A friend function of a class defined outside the class scope but it has the right
//  to access all private and protected member of a class

// 2.Even though the prototype for friend functions appear in the class
// defination,friend are not member function


// private k access korar jonno friend function

/*
#include<bits/stdc++.h>
using namespace std;
class test{
    int num;
public:
    test():num(0)
    {

        cout<<" Constructor is called"<<endl;
    }
    void show()
    {

        cout<<"simple function"<<endl;
    }
};
int main()
{

    test t;
    t.show();


}*/




/*
#include<bits/stdc++.h>
using namespace std;
class test{
    int num;
public:
    test()
    {

        cout<<" Constructor is called"<<endl;
    }
    friend void show(test t);

};
 void show(test t)
    {
        t.num=10;

        cout<<"simple function"<<endl;
        cout<<t.num<<endl;
    }
int main()
{

    test t;
    show(t);


}
/*


/*


#include<bits/stdc++.h>
using namespace std;
class B;
class A
{
    int num1;
public:
    void get();
    friend void add(A,B);

};
void A::get()
{

    cout<<"Enter first val ";
    cin>>num1;
}



class B
{
    int num2;
public:
    void get();
    friend void add(A,B);

};
void B::get()
{

    cout<<"Enter second val ";
    cin>>num2;
}
void add(A obj1,B obj2)
{

    cout<<"Result "<<obj1.num1+obj2.num2<<endl;
}


int main()
{
A obj1;
B obj2;
obj1.get();
obj2.get();
add(obj1,obj2);
}
*/




#include<bits/stdc++.h>
using namespace std;
class B;
class A
{
    int num1;
public:
    friend void get(A &obj1,B &obj2);
    friend void add(A &obj1,B &obj2);

};



class B
{
    int num2;
public:
     friend void get(A &obj1,B &obj2);
    friend void add(A &obj1,B &obj2);

};
void get(A &obj1,B &obj2)
{

     cout<<"Enter first val ";
     cin>>obj1.num1;
      cout<<"Enter second val ";
      cin>>obj2.num2;

}

void add(A &obj1,B &obj2)
{
int result=obj1.num1+obj2.num2;
    cout<<"Result "<<result<<endl;
}


int main()
{
A obj1;
B obj2;
get(obj1,obj2);
add(obj1,obj2);
}


