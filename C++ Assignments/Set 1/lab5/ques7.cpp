#include <iostream>
using namespace std; 

class base {
    int b1;
    public: 

    base(int a) {
        b1=a;
    }
    virtual void show() {
        cout<<"The base class integer value" <<b1; 
    }
};

class derived : public base {
    int b2; 
    public:
    derived(int a) : base(a) {
        b2=a;
    }
    void show() {
        cout<<"The derived class object " <<b2;
    }
};

int main() { 
    base b(100);
    derived d(88);
    d.show();
    return 0;
}