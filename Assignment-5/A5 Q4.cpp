#include<iostream>
using namespace std;
class Student{
public:
    virtual void getData()=0;
    virtual void showData()=0;
    virtual ~Student(){}
};
class Science:public Student{
    string name;int roll;float phy,chem,math;
public:
    void getData(){
        cout<<"[Science]\nEnter name & roll: ";
        cin>>name>>roll;
        cout<<"Enter marks in Phy, Chem, Math: ";
        cin>>phy>>chem>>math;
    }
    void showData(){
        cout<<"Science Student: "<<name<<"\nRoll: "<<roll
        <<"\nAvg: "<<(phy+chem+math)/3<<endl;
    }
};
class Art:public Student{
    string name;int roll;float hist,lit,soc;
public:
    void getData(){
        cout<<"[Art]\nEnter name & roll: ";
        cin>>name>>roll;
        cout<<"Enter marks in History, Lit, Sociology: ";
        cin>>hist>>lit>>soc;
    }
    void showData(){
        cout<<"Art Student: "<<name<<"\nRoll: "<<roll
        <<"\nAvg: "<<(hist+lit+soc)/3<<endl;
    }
};
class Commerce:public Student{
    string name;int roll;float acc,eco,bs;
public:
    void getData(){
        cout<<"[Commerce]\nEnter name & roll: ";
        cin>>name>>roll;
        cout<<"Enter marks in Accounts, Eco, BS: ";
        cin>>acc>>eco>>bs;
    }
    void showData(){
        cout<<"Commerce Student: "<<name<<"\nRoll: "<<roll
        <<"\nAvg: "<<(acc+eco+bs)/3<<endl;
    }
};
int main(){
    Student* s[3];
    s[0]=new Science();
    s[1]=new Art();
    s[2]=new Commerce();
    for(int i=0;i<3;i++){s[i]->getData();}
    cout<<"\n--- Display Details ---\n";
    for(int i=0;i<3;i++){
        s[i]->showData();
    }
    for(int i=0;i<3;i++){
        delete s[i];
    }
    return 0;
}
