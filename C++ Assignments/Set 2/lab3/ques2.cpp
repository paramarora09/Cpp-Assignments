#include <iostream>
using namespace std; 
class DB;
class DM {
    int meters; 
    public:
    DM() {}
    DM(int a) {
        meters=a;
    }

    void display() {
        cout<<meters <<" m";
    }

    friend void replace(DM,DB);
};

class DB {
    int feet;

    public:
    DB(int a) {
        feet=a;
    }

    friend void replace(DM,DB);
};

void replace(DM a, DB b) {
    int temp;
    temp=a.meters;
    a.meters=b.feet;
    b.feet=temp;

}

int main() {
    DM f(10);
    DB g(15);
    replace(f,g);
    f.display();
    return 0;

}
