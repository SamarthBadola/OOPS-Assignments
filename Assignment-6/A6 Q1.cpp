#include <iostream>
using namespace std;
class Polygon{
protected:
    float width, height;
public:
    void set_value(float w, float h){ width=w; height=h;}
    virtual void calculate_area()=0;
    virtual ~Polygon() {}
};
class Rectangle:public Polygon{
public:
    void calculate_area(){ 
        cout<<"Area of Rectangle: "<<(width*height)<<endl; }
};
class Triangle:public Polygon {
public:
    void calculate_area(){ 
        cout<<"Area of Triangle: "<<(0.5f*width*height)<<endl; }
};
int main(){
    Polygon* p;
    Rectangle r; 
    Triangle t;
    p=&r; 
    p->set_value(10,5); 
    p->calculate_area();
    p=&t; 
    p->set_value(10,5); 
    p->calculate_area();
    return 0;
}
