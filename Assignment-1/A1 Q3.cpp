#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"choose a value of n between 1-10:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"this is a for loop and will end once "<<i<<" becomes equivalent to n\n";
    }
    cout<<"the condition to check was i<n hence nothing was printed once i=n\n\n";
     int i=0;
    while(i!=n){
       cout<<"this is a while loop, it checks the condition of whether i==n or not.\n";
       cout<<"to end it type the value of n.\ncurrently i= "<<i<<endl;
       cin>>i;
    }
     cout<<"this is a do-while loop, it checks a condition while exiting a loop. so it will run at the start even if the condition is already false\n\n";
    do{
        
        cout<<"to exit, type the value of n, currently i= "<<i<<endl;
        cin>>i;
    }
     while(i!=n);
    cout<<"end of simulation";
    return 0;
}
