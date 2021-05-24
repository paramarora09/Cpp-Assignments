#include <iostream>
using namespace std; 


class base {
    int b;
    public: 
    base() {
        cout<<"This is base class"; 
    }
};

class derived : public base {
    int d;
    public:
    derived(){
        cout<<"This is the derived class";
    }
};

int main() {
    base b1;
    derived d1;
    return 0;
}