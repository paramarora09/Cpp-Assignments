#include <iostream>
using namespace std; 

class abstract {
    public:
    virtual void show()=0;
};

class derived : public abstract {
    public:
    void show() {
        cout<<"Inherited from Abstract Class" ;
    }

};

int main() {
    abstract *b;
    derived d; 
    b = &d; 
    b->show();
return 0; 
}
