#include<bits/stdc++.h>
using namespace std;
class matrix{
    int a;
public:
    int get_a(){
        cin>>a;
    }
    int display(){
        return a;
    }
};
int main(){
    matrix ob[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            ob[i][j].get_a();
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ob[i][j].display()<<" ";
        }
        cout<<endl;
    }

    return 0;
}
