#include <iostream>
using namespace std; 

class complex {
    public:
    float real, imaginary;
    void setComplex(float a,float b){
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
};

int main() {
    complex a,b,final;
    float r1,r2,i1,i2;
    cout<<"Enter the real and imaginary of both complex nos";
    cin>>r1>>i1>>r2>>i2;
    a.setComplex(r1,i1);
    b.setComplex(r2,i2);
    final=a+b;
    final.displayComplex();
    return 0;
}