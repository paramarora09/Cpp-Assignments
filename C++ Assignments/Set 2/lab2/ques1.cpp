#include <iostream>
#include <string>
using namespace std; 

class student {
    char name;
    int rollno;
    char degree;
    char hostel;
    int currentCGPA;

    public:
    void addDetails(){
        cout<<"Enter the details" <<endl;
        cin>>name;
        cin>>rollno;
        cin>>degree;
        cin>>hostel;
        cin>>currentCGPA;
    }
    
    void updateDetails() {
        cout<<"Data Updation" <<endl;
        cin>>name;
        cin>>rollno;
        cin>>degree;
    }

    void updateCGPA() {
        cout<<"UpdateCGPA" <<endl;
        cin>>currentCGPA;
    }

    void updateResidenceInfo() {
        cout<<"Residence Updation" <<endl;
        cin>>hostel;
    }

    void displaydetails() {
        cout<<name;
        cout<<rollno;
        cout<<degree;
        cout<<hostel;
        cout<<currentCGPA;
    }

};
int main() {

    student s;
    s.addDetails();
    s.displaydetails();
    return 0;
}