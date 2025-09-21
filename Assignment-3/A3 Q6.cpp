#include<iostream>
using namespace std;
class b;
class a{
    int test1;
    public:
    a(int x){test1=x;cout<<"class a object initialized to "<<test1<<endl;}
    friend int add(a &x, b &y);
};
class b{
    int test2;
    public:
     b(int x){test2=x;cout<<"class b object initialized to "<<test2<<endl;}
    friend int add(a &x, b &y);
};
int add(a &x, b &y){
    return x.test1+y.test2;
}
int main(){
    a obj1(5);
    b obj2(8);
    cout<<"sum of both obejcts= "<<add(obj1, obj2);
    return 0;
}
