#include <iostream>
using namespace std; 

class Alpha {
    int p1;
    public:
    Alpha() {
        p1=0;
    }

    ~Alpha() {
        cout<<endl<<"Destructing Alpha";
    }
};

class Beta {
    int p2;
    public:
    Beta() {
        p2=0; 
    }
    
    ~Beta() {
        cout<<endl<<"Destructing Beta"; 
    }
}; 

class Gamma : public Alpha, public Beta {
    int p3;
    public:
    Gamma() {
        p3=0;
    }

    ~Gamma() {
        cout<<endl<<"Destructing Gamma";
    }
};

int main() {
    Gamma g; 
    return 0;
}



