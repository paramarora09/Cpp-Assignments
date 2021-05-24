#include <iostream>
using namespace std;

class Student {
    public:
    virtual void show()=0;
}; 

class Science : public Student{
    public:
    void show() {
        cout<<"Science Student";
    }
};

class Art : public Student{
    public:
    void show() {
        cout<<endl <<"Arts Student";
    }
};

class Commerce: public Student {
    public:
    void show() {
        cout<<endl<<"Commerce Student";
    }
};

int main() {
    Student *p;
    Science s;
    Art a;
    Commerce c;
    p=&s;
    p->show();

    p=&a;
    p->show();

    p=&c;
    p->show();
}