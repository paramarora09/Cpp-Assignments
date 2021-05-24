#include <iostream>
using namespace std; 

class X {
    protected:
    char arr[20]; 
    public: 
    X() {
        strcpy(arr,"Welcome ");
        cout<<arr <<endl;
    }
}; 

class Y{
    protected:
    char arr2[20];
    public:
    Y() {
        strcpy(arr2,"to Thapar");
        cout<<arr2 <<endl;
    }
};

class Z : public X, public Y {
    char arrfi[20];
    public:
    Z() : X(),Y() {
        //arrfi = arr+arr2; 
        strcat(arr,arr2);
        cout<<arr<<endl;
    }
}; 

int main() {
    Z obj; 
}