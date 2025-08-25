#include <iostream>
using namespace std;
class student{
public:
    int id;
    double cgpa;
    char g;
    student(){
        this->id = 10;
        this->cgpa= 3.60;
        this->g = 'm';
    }
};

int main() {
    student *obj = new student;
    cout << obj->id << endl;
    cout << obj->cgpa<< endl;
    cout << obj->g << endl;
    delete obj;
    return 0;
}
