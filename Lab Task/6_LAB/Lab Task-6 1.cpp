#include<bits/stdc++.h>
using namespace std;
class Two;
class One{
private:
     int a;
public:
    void assign1(){
        a=10;
    }
    friend int mx(One,Two);
};
class Two{
private:
    int a;
public:
    void val(){
       cout<<"Enter class Two value:";
       cin>>a;
    }
    friend int mx(One ,Two);
};
int mx(One e1,Two e2){
    if(e1.a>e2.a)return e1.a;
    else return e2.a;
}
int main(){
    One e1;
    e1.assign1();
    Two e2;
    e2.val();
    cout<<"Max Value is :"<<mx(e1,e2)<<endl;
    return 0;
}
