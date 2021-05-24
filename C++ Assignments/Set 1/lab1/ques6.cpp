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
   Student s[3];
   for(int i=1; i<=3; i++) {
       s[i].setStudentData();
       cout<<endl;
   }

   for(int i=1; i<=3; i++) {
       s[i].getStudentData();
       cout<<endl;
   }
   return 0;
}