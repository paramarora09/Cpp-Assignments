#include <iostream>
using namespace std;

class complex {
    float real;
    float imaginary;
    public:
    complex(){
        cout<<"Enter the real value" <<endl;
        cin>>real;
        cout<<"Enter the imaginary value" <<endl;
        cin>>imaginary;
    }

    void display() {
        cout<<real <<" i" <<imaginary <<endl; 
    }

    complex sum(complex b) {
        complex temp;
        temp.real= real + b.real;
        temp.imaginary= imaginary + b.imaginary;
        return temp;
    }

    ~complex() {
        cout<<endl <<"Destructing Object"; 
    }
};



int main() {
    complex a,b,c;
    c=a.sum(b);
    a.display();
    b.display();
    c.display();

}