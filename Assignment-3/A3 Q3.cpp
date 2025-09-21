#include<iostream>
using namespace std;
class Demo {
public:
    //(i) Destructor name begins with ~ and matches class name
    ~Demo() {
        cout<<"Destructor called"<<endl;
    }
    //(ii) There cannot be more than one destructor in a class
    // Uncommenting the below code will cause a compile-time error
    /*
    ~Demo(int x) {  
        cout<<"Invalid destructor with parameter"<<endl;
    }
    */
    // (iii) Destructors do not allow any parameter
    // (iv) Destructors do not have any return type
};

int main(){
    Demo d;  
    cout<<"Object created"<<endl;
    return 0;
}
