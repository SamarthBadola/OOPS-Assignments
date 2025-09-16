#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    void set(){
        cout<<"value of real part: ";
        cin>>real;
        cout<<"value of imaginary part: ";
        cin>>img;
    }
    void display(){
        cout<<"the given number is "<<real<<"+"<<img<<"i\n";
    }
    void sum(complex n){
        real=real+n.real;
        img=img+n.img;
        cout<<"the sum of these complex numbers is "<<real<<"+"<<img<<"i\n";
    }
};
int main(){
    complex s,l;
    s.set();
    l.set();
    s.display();
    l.display();
    s.sum(l);
    return 0;
}
