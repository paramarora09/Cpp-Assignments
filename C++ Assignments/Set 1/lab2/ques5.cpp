#include <iostream>
using namespace std; 

class complex {
    public:
    float real, imaginary;

    complex() {
      real=0;
      imaginary=0;
    }
    
    complex(float a,float b){
        real=a;
        imaginary=b;
    }

    void displayComplex() {
        cout<<endl<<real <<" + i" <<imaginary;
    }

    complex operator+(complex b) {
        complex temp;
        temp.real= real+b.real;
        temp.imaginary=imaginary+b.imaginary;
        return temp;
    }

    ~complex() {
        cout<<endl<<"Deleting Complex No's";
    }
};

int main() {
    float r1,r2,i1,i2;
    cout<<"Enter the real and imaginary of both complex nos";
    cin>>r1>>i1>>r2>>i2;
    complex a(r1,i1),b(r2,i2),final;
    final=a+b;
    final.displayComplex();
    return 0;
}