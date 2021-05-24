#include<iostream>
using namespace std;

int x; // Global x

class A 
{
public: 
    static int x;  
    static int y;   
   // Only declaration
   void fun();

   void func(int x)  
    { 
       // We can access class's static variable
       // even if there is a local variable
       cout << "Value of static x is " << A::x;
  
       cout << "\nValue of local x is " << x;  
    }
};
  
// Definition outside class using ::
void A::fun()
{
   cout << "fun() called";
}

int main()
{
int x = 10; // Local x
cout << "Value of global x is " << ::x;
cout << "\nValue of local x is " << x;

A a;
a.fun();


cout << "\nA::y = " << A::y;

return 0;
}
