#include <iostream>
using namespace std; 

class student {
    protected: 
    int rollno;
    char name; 
    public:
    void GetDetails() {
        cout<<"Enter student roll number " <<endl;
        cin>>rollno;
        cout<<"Enter the name of the student" <<endl;
        cin>>name;
    }
    void DisplayDetails();
};

class marks : public student {
    protected: 
    float subject1;
    float subject2;

    public:
    void GetMarks() {
        cout<<"Enter the marks of  subject1" <<endl; 
        cin>>subject1;
        cout<<"Enter the marks of subject2" <<endl;
        cin>>subject2;
    }
    void DisplayMarks();
}; 

class result : public marks {
    float totalmarks;
    char final[7];
    public:
    void CalculateResult() {
        totalmarks= subject1 + subject2;
        if(totalmarks<66)
            strcpy(final,"Failed");
        else 
            strcpy(final,"Passed");
    }
    void DisplayResult() {
       
        cout<<endl<<rollno <<"    " <<name <<"     " <<subject1 <<"   " <<subject2 <<"  " <<totalmarks <<"  " <<final;
     }

};

int main() {
    int n;
    cout<<"Enter the number of students";
    cin>>n;
    result r[n];

    for(int i=1; i<=n; i++) {
       r[i].GetDetails(); 
       r[i].GetMarks(); 
    }
    cout<<endl <<"Roll No.  Name    Subject1    Subject2    Total Marks Obtained    Result"; 
    for(int i=1;i<=n;i++) {
        r[i].CalculateResult();
        r[i].DisplayResult();
    }
    return 0;
}

