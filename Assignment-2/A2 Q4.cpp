#include<iostream>
using namespace std;
inline int cube(int x){return x*x*x;}
int main(){
    int n;
    cout<<"enter a number:\n";
    cin>>n;
    cout<<"cube of "<<n<<"= "<<cube(n);
    return 0;
}
