#include<iostream>
using namespace std;
class rectangle{
  int length, width, height;
  public:
  void set(){
       cout<<"enter length: ";
        cin>>length;
        cout<<"enter width: ";
        cin>>width;
        cout<<"enter height: ";
        cin>>height;
  }
  int area(){
      return length*width;
  }
};
int main(){
    int n;
    cout<<"how many rectangles do you wish to create?\n";
    cin>>n;
    rectangle r[n];
    cout<<"enter value of rectangle:-\n";
    for(int i=0;i<n;i++){
       cout<<""<<i+1<<endl;
       r[i].set();
    }
    cout<<"number of rectangle whose area you wish to know?\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"area of rectangle "<<i+1<<"= "<<r[i].area()<<endl;
    }
    return 0;
}
