#include<iostream>
using namespace std;
int x=50;
class test{
    public:
    static int x;
};
int test::x=10; 
int main(){
    int x=2;
    cout<<"value of local variable x= "<<x<<endl;
    cout<<"value of global variable x= "<<::x<<endl;
    cout<<"value of class static variable x= "<<test::x;
    return 0;
}
