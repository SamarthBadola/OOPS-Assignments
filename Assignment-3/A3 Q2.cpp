#include<iostream>
using namespace std;
class rectangle{
    int length, breadth;
    static int count;
    public:
    rectangle(int x=0, int y=0){if(y==0)breadth=x;else breadth=y;length=x;}
    ~rectangle(){
        cout<<"destructor called for rectangle "<<count<<endl;
        count++;
    }
    int area(){
        return length*breadth;
    }
};
int rectangle::count=1;
int main(){
    rectangle r[3]={rectangle(),rectangle(4,6),rectangle(2)};
    cout<<"area of first rectangle= "<<r[0].area()<<endl;
    cout<<"area of second rectangle= "<<r[1].area()<<endl;
    cout<<"area of third rectangle= "<<r[2].area()<<endl;
    return 0;
}
