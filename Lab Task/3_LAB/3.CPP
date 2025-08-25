/*
Write a C++ program to display names, roll no and grades of 3 students
whohave appeared in examination. declare the class of name, roll no
and grade. create an array of class objects .read and display the
contents of array.
PROCEDURE:
Step 1 - Include the required header files.
Step 2 - Create a class (StudentInfo) with the following class members as
public members. student_name, roll_number and grade as data members.
read_info() and display_info() as member functions.
Step 3 - Implement the read_info() and display_info() member functions.
Step 4 - Create a main() method.
Step 5 - Create an object of the above class inside the main() method.
Step 6 - Make function calls to read_info() and display_info() using class
object. 
 */
#include<bits/stdc++.h>
using namespace std;


//crate a class
class StudentInfo
 {
    private:
    string student_name;
    int roll_number;
    float grade;
   // string sub;
    public:
    //public member

    //member function
    void read_info(); /*  cout << "Enter student name: ";
        cin >> student_name;
        cout << "Enter roll number: ";
        cin >> roll_number;
        cout << "Enter grade: ";
        cin >> grade; */

    
    void display_info();
    
       /*  cout << "Student Name: " << student_name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Grade: " << grade << endl; */

    
 };
void StudentInfo::read_info()
    {
        cout << "Enter student name: ";
        cin >> student_name;
        cout << "Enter roll number: ";
        cin >> roll_number;
        cout << "Enter grade: ";
         cin >> grade;


    }
    void StudentInfo:: display_info()
    {
        cout << "Student Name: " << student_name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Grade: " << grade << endl;
       // cout<<"subject"<<sub<<endl;

    }
int main()
{
    //create an object named array
    StudentInfo array[4];
    for(int i=1;i<=3;i++)
    {
    cout << "Enter information for student " << i << ":" << endl;
    //call a function for input data
    array[i].read_info();


    cout << endl;

    }
    cout<<"Print Student Data-------------------------";
    cout<<"--------------------------------------------"<<endl;
    cout<<endl;
      for (int i = 1; i <=3; i++)
      {
        cout << "Information for student " << i<< ":" << endl;
          //call  a function for output data
        array[i].display_info();
        cout << endl;
    }


}

