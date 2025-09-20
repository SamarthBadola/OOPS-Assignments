#include<iostream>
using namespace std;
class test{
    int x=20;
    public:
    void set()const{
        cout<<"current value of x is "<<x<<"\nas a constant function, it can't change value of data member.\n";
        //cin>>x; (removing comment will lead to compilation error.)
    }
    void show()const{
        cout<<"value of x= "<<x<<endl;
    }
};
int main(){
    test t;
    t.set();
    t.show();
    return 0;
}
