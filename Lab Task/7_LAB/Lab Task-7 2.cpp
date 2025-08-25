#include<bits/stdc++.h>
using namespace std;
class employee{
public:
    int a;
    employee(){
        cout<<"Default Constructor"<<endl;
    }
    employee(int val){
        a=val;
    }
    void display(){
        cout<<a<<endl;
    }
    /*~employee(){
        cout<<"Destructor"<<endl;
    }*/

};
int main(){
    employee* obj=new employee();
    obj=new employee(10);
    obj->display();
    delete obj;
    return 0;
}
