#include <iostream>
using namespace std; 

class test {
    int test; 
    void privatefunc() {
        cout<<"Inside Private" <<endl;
    }

    public: 
    void publicfunc() {
        cout<<"Inside Public" <<endl;
        privatefunc();
    }

};
