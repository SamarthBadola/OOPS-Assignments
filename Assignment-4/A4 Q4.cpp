//assuming that passing marks is 60.
#include<iostream>
#include<string>
using namespace std;
class Student{
    protected:
    int RollNo;
    string Name;
    public:
    void getdetails(){
        cout<<"enter student roll number: ";
        cin>>RollNo;
        cout<<"enter name of the student: ";
        cin.ignore();
        getline(cin, Name);
    }
    void displaydetails() {
    cout<<"\t"<<RollNo<<"\t\t "<<Name;
}
};
class Marks: public Student{
    protected:
    int Subject1;
    int Subject2;
    public:
    void getmarks(){
        getdetails();
        cout<<"enter the marks of subject1: ";
        cin>>Subject1;
        cout<<"enter the marks of subject2: ";
        cin>>Subject2;
        cout<<endl;
    }
    void displaymarks() {
    cout<<"\t\t "<<Subject1<<"\t\t\t "<<Subject2;
}
};
class Result: public Marks{
  int totalmarks;
  public:
  void calculateresult(){
      totalmarks=Subject1+Subject2;
  }
  void displayresult(){
    cout<<"\t\t\t\t\t"<<totalmarks<<"\t\t\t\t";
    if(totalmarks>=60){
        cout<<"PASSED"<<endl;
    }
    else{
        cout<<"FAILED"<<endl;
    }
  }
};
int main(){
    int k;
    cout<<"enter the number of students: ";
    cin>>k;
    Result r[k];
    for(int i=0;i<k;i++){
        r[i].getmarks();
        r[i].calculateresult();
    }
     cout << "\nRoll No.\tName\tSubject1\tSubject2\tTotal Marks Obtained\tResult\n";
    cout << "--------------------------------------------------------------------------\n";
     for (int i = 0; i < k; i++) {
        r[i].displaydetails();  
        r[i].displaymarks();    
        r[i].displayresult();   
    }
    cout << "--------------------------------------------------------------------------\n";
    return 0;
}
