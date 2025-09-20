#include<iostream>
int x=20;
class test{
    public:
    static int count;
    test(){count++;}
    void print();
};
int test::count=0;
//(a)Member functions defined outside class
void test::print(){
    std::cout<<"this function was defined outside the class";
}
int main(){
   test a,b,c,d;
   int x=5;
   //(c)To access a class’s static variables
   std::cout<<"number of objects created= "<<test::count<<std::endl;
   //(d)Including in-built libraries
   std::cout<<"local x= "<<x<<std::endl;
   //(b)To access a global variable when there is a local variable with same name
   std::cout<<"global x= "<<::x<<std::endl;
   a.print();
}
