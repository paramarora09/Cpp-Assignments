#include <iostream>
#include <string>
using namespace std; 

class employee {
    int employeeid; 
    string employeename[20];
    int employeeage;
    int employeesalary;

    public:
    void inputinfo(); 
    void displayinfo();
};

void employee::inputinfo() {
    cin>>employeeid; 
    cin>>employeename;
    cin>>employeeage;
    cin>>employeesalary;
}

void employee::displayinfo() {
    cout<<endl<<employeename;
    cout<<endl<<employeeid;
    cout<<endl<<employeeage;
    cout<<endl<<employeesalary;
}

int main() {
    int n;
    cout<<endl<<"How many employees?"; 
    cin>>n;
    employee e[n]; 

    for(int i=1; i<=n; i++) {
        cout<<"Enter the details of employee" <<i;
        e[i].inputinfo();
    }

    for(int i=1; i<=n; i++) {
        cout<<"The Details of employee" <<i;
        e[i].displayinfo();
    }
}