#include<iostream>
using namespace std;
class rectangle{
    int length, breadth;
    public:
    rectangle(){length=0;breadth=0;}
    rectangle(int x, int y){length=x;breadth=y;}
    rectangle(int x){length=x;breadth=x;}
    int area(){
        return length*breadth;
    }
};
int main(){
    rectangle r1,r2(5,6),r3(2);
    cout<<"area of first rectangle= "<<r1.area()<<endl;
    cout<<"area of second rectangle= "<<r2.area()<<endl;
    cout<<"area of third rectangle= "<<r3.area()<<endl;
    return 0;
}
