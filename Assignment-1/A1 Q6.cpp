#include<iostream>
using namespace std;
class Demo{
private:
    void secretFunction(){
        cout<<"This is a PRIVATE function.\n";
    }
public:
    void show(){
        cout<<"Inside PUBLIC function.\n";
        cout<<"Now calling private function from here...\n";
        secretFunction();
    }
    void accessSecret(){
        cout<<"Accessing private function from another public function...\n";
        secretFunction();
    }
};
int main(){
    Demo obj;
    obj.show();
    obj.accessSecret();
    return 0;
}
