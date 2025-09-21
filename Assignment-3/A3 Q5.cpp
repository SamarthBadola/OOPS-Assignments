#include<iostream>
using namespace std;
class b;
class a{
    int test1;
    public:
    a(int x){test1=x;cout<<"class a object initialized to "<<test1<<endl;}
    friend void swap(a &x, b &y);
    void display(){
        cout<<"value inside object of class a is "<<test1<<endl;
    }
};
class b{
    int test2;
    public:
     b(int x){test2=x;cout<<"class b object initialized to "<<test2<<endl;}
    friend void swap(a &x, b &y);
    void display(){
        cout<<"value inside object of class b is "<<test2<<endl;
    }
};
void swap(a &x, b &y){
    int temp;
    temp=x.test1;
    x.test1=y.test2;
    y.test2=temp;
}
int main(){
    a obj1(5);
    b obj2(8);
    swap(obj1, obj2);
    obj1.display();
    obj2.display();
    return 0;
}
