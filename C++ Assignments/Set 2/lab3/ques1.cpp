#include <iostream>
using namespace std; 
class DB;
class DM {
    int meters; 
    int centimeters;
    public:
    DM() {}
    DM(int a,int b) {
        meters=a;
        centimeters=b;
    }

    void display() {
        cout<<meters <<" m";
        cout<<centimeters <<" cm";
    }

    friend DM add(DM,DB);
};

class DB {
    int feet;
    int inches;

    public:
    DB(int a, int b) {
        feet=a;
        inches=b;
    }

    friend DM add(DM,DB);
};

DM add(DM a,DB b) {
    a.meters+= b.feet;
    a.centimeters+= b.inches;
    return a;
}

int main() {
    DM temp;
    DM f(10,20);
    DB g(15,30);
    temp=add(f,g);
    temp.display();
}
