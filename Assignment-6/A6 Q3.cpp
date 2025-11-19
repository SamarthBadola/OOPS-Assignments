#include <iostream>
using namespace std;
class Triangle{
public:
    float area(float base, float height){ 
        return 0.5f*base*height; }
    float area(float side){ 
        return (1.732f/4.0f)*side*side; }
    float area_isosceles(float a, float b){
        float val = a*a - (b*b)/4.0f;
        if(val<=0) return 0.0f;
        float h = val;
        for(int i=0;i<6;i++) h = 0.5f*(h + val/h);
        return 0.5f * b * h;
    }
};
int main(){
    Triangle T;
    cout<<"Right-angle area (6,8): "<<T.area(6.0f,8.0f)<<endl;
    cout<<"Equilateral area (side 6): "<<T.area(6.0f)<<endl;
    cout<<"Isosceles area (a=5,b=8): "<<T.area_isosceles(5.0f,8.0f)<<endl;
    return 0;
}
