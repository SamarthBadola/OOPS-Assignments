#include <iostream>
using namespace std;
class Base {
public:
    int pub=1;
protected:
    int prot=2;
private:
    int priv=3;
};
class PublicDerived: public Base{
public:
    void show(){
        cout<<"PublicInheritance: pub= "<<pub <<" ,prot= "<<prot<<endl;
        // cout << priv; error: private of Base
    }
};
class ProtectedDerived: protected Base{
public:
    void show(){
        cout<<"ProtectedInheritance: pub= "<<pub<< ", prot= "<<prot<< endl;
    }
};
class PrivateDerived: private Base{
public:
    void show(){
        cout<<"PrivateInheritance: pub= "<<pub<<",prot= "<< prot<<endl;
    }
};
int main() {
    PublicDerived pd;
    pd.show();
    cout<<"value of publicaly accesible variable is "<<pd.pub<<endl; //public stays public
    // cout << pd.prot; //error: protected not accessible
    // cout << pd.priv; //error: private not accessible
    ProtectedDerived prd;
    prd.show();
    // cout << prd.pub; //error: now public became protected
    PrivateDerived prv;
    prv.show();
    // cout << prv.pub; //error: now public became private
    return 0;
}
