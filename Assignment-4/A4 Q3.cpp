#include<iostream>
using namespace std;
class fruit{
    protected:
    static int count;
    public:
    fruit(){count++;}
    static void show(){
        cout<<"number of fruits= "<<count<<endl;
    } 
};
class Apples: public fruit{
    static int apple;
    public:
    Apples(){apple++;}
    static void na(){
        cout<<"number of apples= "<<apple<<endl;
    }
};
class Mangoes: public fruit{
  static int mango;
  public:
  Mangoes(){mango++;}
  static void nm(){
      cout<<"number of mangoes= "<<mango<<endl;
  }
};
int fruit::count=0;
int Mangoes::mango=0;
int Apples::apple=0;
int main(){
    Apples a[3];
    Mangoes m[6];
    fruit::show();
    Apples::na();
    Mangoes::nm();
    return 0;
}
