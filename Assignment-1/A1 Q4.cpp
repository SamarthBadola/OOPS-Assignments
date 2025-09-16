#include<iostream>
using namespace std;
struct Student{
    private:
    string name;
    int roll;
    string degree;
    char hostel[100];
    float currentcgpa;
    public:
    void addDetails(){
        cout<<"name of student: ";
        getline(cin, name);
        cout<<"student roll number: ";
        cin>>roll;
        cout<<"pursuing degree: ";
        cin.ignore();
        getline(cin, degree);
        cout<<"current hostel: ";
         cin.getline(hostel, 100);
        cout<<"current cgpa: ";
        cin>>currentcgpa;
    }
    void updatedetails(){
        int n;
        cout<<"what value do you want to update?\n1.Name\n2.Roll number\n3.Degree\n4.Hostel\n5.Cgpa\n";
        cin>>n;
        cin.ignore();
        switch(n){
            case 1:
               cout<<"update name: ";
        getline(cin, name); 
        break;
            case 2:
                cout<<"update roll number: ";
        cin>>roll;
        break;
            case 3:
                cout<<"update degree: ";
        getline(cin, degree);
        break;
            case 4:
                cout<<"new hostel: ";
        cin.getline(hostel, 100);
        break;
            case 5:
                cout<<"new value of cgpa: ";
        cin>>currentcgpa;
        break;
            default:
                cout<<"inaccurate value entered";
                break;
        }
    }
    void updatecgpa(){
        cout<<"enter new value of cgpa: ";
        cin>>currentcgpa;
    }
    void updatehostel(){
        cout<<"enter new hostel: ";
         cin.getline(hostel, 100);
    }
    void displaydetails(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Roll No.: "<<roll<<endl;
        cout<<"pursuing degree: "<<degree<<endl;
        cout<<"Student hostel: "<<hostel<<endl;
        cout<<"Student CGPA: "<<currentcgpa<<endl;
    }
};
int main(){
    Student s;
    s.addDetails();
    s.updatedetails();
    s.displaydetails();
    s.updatecgpa();
    s.updatehostel();
    s.displaydetails();
    return 0;
}
