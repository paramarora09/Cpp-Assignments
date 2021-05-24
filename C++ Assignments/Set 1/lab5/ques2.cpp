#include <iostream>
using namespace std; 

class base {
    protected:
    int b1;
};

class derived : public base {
    public: 
    void show() {
        cout<<"Printing the protected member" <<b1;
    }
};

int main(){ 
derived d1;
d1.show();
return 0;
}

