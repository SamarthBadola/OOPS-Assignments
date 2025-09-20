#include<iostream>
using namespace std;
class test{
    static int s;
    public:
    static void set(){
        cout<<"enter value of s: ";
        cin>>s;
    }
    static void show(){
            cout<<"value of s= "<<s<<endl;
        }
};
    int test::s=0;
int main(){
    test t1, t2;
    t1.show();
    t2.show();
    test::set();
    t1.show();
    t2.show();
    return 0;
}
