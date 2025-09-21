#include<iostream>
using namespace std;
class test{
    int* p;
    public:
    test(int x){
        p= new int;
        *p=x;
       cout<<"value set to "<<*p<<endl; 
    }
    ~test(){
        delete p;
        cout<<"memory freed";
    }
};
int main(){
    test t(5);
    return 0;
}
