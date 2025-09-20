#include<iostream>
using namespace std;
class Box{
    int length,width,height;
public: 
    void set(){
        cout<<"enter length: ";
        cin>>length;
        cout<<"enter width: ";
        cin>>width;
        cout<<"enter height: ";
        cin>>height;
    }
    void display(){cout<<"Dimensions: "<<length<<" "<<width<<" "<<height<<endl;}
    //pass and return by value
    Box combine(Box b){
        Box temp;
        temp.length=length+b.length;
        temp.width=width+b.width;
        temp.height=height+b.height;
        return temp;
    }
    //pass and return by address
    Box subtract(Box* b){
        Box temp;
        temp.length=length-b->length;
        temp.width=width-b->width;
        temp.height=height-b->height;
        return temp;
    }
};
int main(){
    Box b1,b2;
    b1.set();
    b2.set();
    cout<<"Box1: "; b1.display();
    cout<<"Box2: "; b2.display();

    Box b3=b1.combine(b2);   // pass by value
    cout<<"Combined Box ";
    b3.display();
    b3=b1.subtract(&b2); //pass by address
    cout<<"subtracting b1 by b2 gives the ";
    b3.display();
    return 0;
}
