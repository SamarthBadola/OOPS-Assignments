#include <iostream>
using namespace std;
class Number{
protected:
    int num;
public:
    Number(int n):num(n){}
};
class Square:public Number{
public:
    Square(int n):Number(n){}
    void calculateSquare(){cout<<"Square="<<num*num<<endl;}
};
class Cube:public Number{
public:
    Cube(int n):Number(n){}
    void calculateCube(){cout<<"Cube="<<num*num*num<<endl;}
};
int main(){
    int number;
    cout<<"Enter a number:";
    cin>>number;
    Square s(number);
    Cube c(number);
    s.calculateSquare();
    c.calculateCube();
    return 0;
}
