/*
Create the equivalent of a four-function calculator. The program should request
the user to enter a number, an operator, and another number. It should then
carry out the specified arithmetical operation: adding, subtracting, multiplying, or
dividing the two numbers. (It should use a switch statement to select the
operation). Finally, it should display the result. When it finishes the calculation,
the program should ask if the user wants to do another calculation. The response
can be Y or N. Some sample interaction with the program might look like this.
Enter first number, operator, second number: 10/ 3
Answer = 3.333333
Do another (Y/ N)? Y
Enter first number, operator, second number 12 + 100
Answer = 112
Do another (Y/ N) ? N
*/


#include<bits/stdc++.h>
using namespace std;
int first,sec;
char op,choice;
void Plus(){ cout<<"plus:"<<first+sec<<endl;}
void Minus(){ cout<<"minus:"<<first-sec<<endl;}
void mul() {cout<<"mul:"<<first*sec<<endl;}
void div()  {cout<<"div:"<<first/sec<<endl;}

int main()
{
    do
    {

        cout<<"Enter first number, operator, second number:";
        cin>>first>>op>>sec;
        switch(op)
        {
        case '+':
            Plus();
            break;
        case '-':
            Minus();
            break;
        case '*':
            mul();
            break;
        case '/':
            div();
            break;
        case 'a':
            exit(1);


        }

        cout<<"DO another (Y/N)?";
        cin>>choice;



    }
    while(choice=='Y' || choice=='y');
}
























