#include<iostream>
#include<string.h>
using namespace std;
class X{
protected:
    char str1[50];
public:
    X(){strcpy(str1,"Hello");}
    ~X(){cout<<"destructor of X\n";}
};
class Y{
protected:
    char str2[50];
public:
    Y(){strcpy(str2,"World");}
    ~Y(){cout<<"destructor of Y\n";}
};
class Z:public X,public Y{
    char str3[100];
public:
    Z(){
        strcpy(str3,str1);
        strcat(str3," ");
        strcat(str3,str2);
        cout<<"concatenated String: "<<str3<<endl;
    }
    ~Z(){cout<<"destructor of Z\n";}
};
int main(){
    Z obj;
    return 0;
}
