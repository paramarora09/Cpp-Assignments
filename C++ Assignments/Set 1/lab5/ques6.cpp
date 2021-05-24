#include <iostream>
using namespace std; 

class base {
    int b1;
};

class singleD : public base{ //single inheritance
    int sD1;
};

class multipleD : public base, public singleD { //multiple inheritance
    int mD1;
};

class hierarchicalD : public base { //hierarchical inheritance
    int hD1; 
};

class multipleD : public singleD { //multiple inheritance 
    int mulD1; 
};

class hybridD : public singleD, public hierarchicalD { //hybrid inheritance
    int hybridD1; 
};


int main() {
    base b;
    return 0;
}