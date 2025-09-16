#include<iostream>
using namespace std;
namespace TestA{
    int value=10;
    void display(){
        cout<<"testA value= "<<value<<endl;
    }
}
namespace TestB{
    int value=20;
    void display(){
        cout<<"testB value= "<<value<<endl;
    }
}
int value=5;
void display(){
    cout<<"global value= "<<value<<endl;
}
int main(){
    display();
    TestA::display();
    TestB::display();
    cout<<"global variable= "<<value<<endl;
    cout<<"test A variable= "<<TestA::value<<endl;
    cout<<"test B variable= "<<TestB::value<<endl;
    return 0;
}
