#include <iostream>
using namespace std;
class Shape {
public:
    virtual float area() = 0;
    virtual void display() = 0;
    virtual ~Shape() {}
};
class Circle:public Shape {
    float r;
public:
    Circle(float rr):r(rr){}
    float area(){ 
        return 3.1416f*r*r; }
    void display(){ 
        cout<<"Shape: Circle\nRadius: "<<r<<"\nArea: "<<area()<<endl<<endl; }
};
class Rectangle:public Shape {
    float l,b;
public:
    Rectangle(float ll,float bb):l(ll),b(bb){}
    float area(){ 
        return l*b; }
    void display(){ 
        cout<<"Shape: Rectangle\nL: "<<l<<" B: "<<b<<"\nArea: "<<area()<<endl<<endl; }
};
class Triangle:public Shape {
    float base,height;
public:
    Triangle(float ba,float h):base(ba),height(h){}
    float area(){ 
        return 0.5f*base*height; }
    void display(){ 
        cout<<"Shape: Triangle\nBase: "<<base<<" Height: "<<height<<"\nArea: "<<area()<<endl<<endl; }
};
int main(){
    Shape* s;
    Circle c(5); 
    Rectangle r(4,6); 
    Triangle t(8,5);
    s=&c; 
    s->display();
    s=&r; 
    s->display();
    s=&t; 
    s->display();
    return 0;
}
