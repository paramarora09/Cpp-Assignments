#include <iostream>
//using namespace std;

int val=100; //global variable

class Student{
    private:
   char name[20]; //string is also okay
   int roll; float marks;
   public:
   void setStudentData();
   void getStudentData();
};

void Student::setStudentData() {
       std::cout<<"Enter the name of the student"<<std::endl;
       std::cin>>name;
       std::cout<<"Enter the roll number of the student"<<std::endl;
       std::cin>>roll;
       std::cout<<"Enter the marks of the student"<<std::endl;
       std::cin>>marks;
}

void Student::getStudentData() {
       std::cout<<std::endl<<"Name: " <<name;
       std::cout<<std::endl<<"Roll Number: " <<roll;
       std::cout<<std::endl<<"Marks: "<<marks;
}

static int i=1;
int main() {
    int val= 200; 
    std::cout<<val; //displays 200;
    std::cout<<std::endl<<::val; //displays 100
    std::cout<<std::endl<<::i; //static val;
    return 0;

}
