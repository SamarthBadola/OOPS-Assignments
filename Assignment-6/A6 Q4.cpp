#include <iostream>
using namespace std;
class Student{
public:
    virtual void getData() = 0;
    virtual void showData() = 0;
    virtual ~Student() {}
};
class Engineering:public Student {
    string name; 
    int roll; 
    float engMarks;
public:
    void getData(){ 
        name="EngStudent"; roll=101; engMarks=85.5f; }
    void showData(){ 
        cout<<"Engineering: "<<name<<"\nRoll:"<<roll<<"\nMarks:"<<engMarks<<endl; }
};
class Medicine:public Student {
    string name; 
    int roll; 
    float medMarks;
public:
    void getData(){ 
        name="MedStudent"; roll=102; medMarks=88.0f; }
    void showData(){ 
        cout<<"Medicine: "<<name<<"\nRoll:"<<roll<<"\nMarks:"<<medMarks<<endl; }
};
class Science:public Student {
    string name; 
    int roll; 
    float sciMarks;
public:
    void getData(){ 
        name="SciStudent"; roll=103; sciMarks=82.0f; }
    void showData(){ 
        cout<<"Science: "<<name<<"\nRoll:"<<roll<<"\nMarks:"<<sciMarks<<endl; }
};
int main(){
    Student* arr[3];
    arr[0]=new Engineering();
    arr[1]=new Medicine();
    arr[2]=new Science();
    for(int i=0;i<3;i++) {
        arr[i]->getData();}
    cout<<"\n--- Students ---\n";
    for(int i=0;i<3;i++) {
        arr[i]->showData();}
    for(int i=0;i<3;i++){ 
        delete arr[i];}
    return 0;
}
