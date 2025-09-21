#include<iostream>
using namespace std;
class A{
    int privateValue;
public:
    A(int x){privateValue=x;}
    friend class B;
};
class B{
public:
    void showA(A &obj){
        cout<<"Accessing private value of class A: "<<obj.privateValue<<endl;
    }
    void modifyA(A &obj, int val){
        obj.privateValue=val;
        cout<<"Private value of class A modified to: "<<obj.privateValue<<endl;
    }
};
int main(){
    A obj1(3);
    B obj2;

    obj2.showA(obj1);
    obj2.modifyA(obj1, 7);
    obj2.showA(obj1);
    return 0;
}
