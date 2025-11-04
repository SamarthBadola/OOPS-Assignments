#include<iostream>
using namespace std;
class A{
protected:
    int a;
public:
    A(){a=5;cout<<"A constructor\n";}
};
class B:virtual public A{
public:
    B(){cout<<"B constructor\n";}
};
class C:virtual public A{
public:
    C(){cout<<"C constructor\n";}
};
class D:public B,public C{
public:
    D(){cout<<"D constructor\n";}
    void show(){
        cout<<"Value of a = "<<a<<endl;
    }
};
int main(){
    D obj;
    obj.show();
    return 0;
}
