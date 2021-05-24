#include <iostream>
using namespace std;

class Student{
    private:
   char name[20]; //string is also okay
   int roll; float marks;
   public:
   void setStudentData() {
       cout<<"Enter the name of the student"<<endl;
       cin>>name;
       cout<<"Enter the roll number of the student"<<endl;
       cin>>roll;
       cout<<"Enter the marks of the student"<<endl;
       cin>>marks;
   }

   void getStudentData(){
       cout<<endl<<"Name: " <<name;
       cout<<endl<<"Roll Number: " <<roll;
       cout<<endl<<"Marks: "<<marks;
   }

};

int main() {
    Student s[3];  //array of object without pointers
    Student obj[5];
    Student *ptr;
    ptr= new Student[5]; //array of objects using pointers
}

