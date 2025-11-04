#include<iostream>
using namespace std;
class Alpha{
    int a;
public:
    Alpha(int x){a=x;cout<<"alpha constructor\n";}
    ~Alpha(){cout<<"alpha destructor\n";}
    void show(){
        cout<<"Alpha = "<<a<<endl;
    }
};
class Beta{
    int b;
public:
    Beta(int y){b=y;cout<<"beta constructor\n";}
    ~Beta(){cout<<"beta destructor\n";}
    void show(){
        cout<<"Beta = "<<b<<endl;
    }
};
class Gamma:public Alpha,public Beta{
    int c;
public:
    Gamma(int x,int y,int z):Alpha(x),Beta(y){c=z;cout<<"gamma constructor\n";}
    ~Gamma(){cout<<"gamma destructor\n";}
    void show(){
        Alpha::show();
        Beta::show();
        cout<<"Gamma = "<<c<<endl;
    }
};
int main(){
    Gamma g(10,20,30);
    g.show();
    return 0;
}
