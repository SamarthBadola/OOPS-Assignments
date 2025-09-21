#include<iostream>
using namespace std;
class test{
    int x;
    int y;
    public:
    void set(int l, int b){
        this->x=l;
        this->y=b;
    }
    void display(){
        cout<<"value of x= "<<x<<endl;
        cout<<"value of y= "<<y<<endl;
    }
};
int main(){
    test t;
    //calling function using dot operator
    t.set(5,6);
    test *p=&t;
    //calling function using arrow operator
    p->display();
    return 0;
}
