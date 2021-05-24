#include <iostream>    
using namespace std;    
class pen    
{    
    private:    
        int length;    
    public:    
        pen(): length(0) { }    
        friend int printLength(pen); //friend function    
};    
int printLength(pen b)    
{    
   b.length += 10;    
    return b.length;    
}    
int main()    
{    
    pen b;    
    cout<<"Length of pen: "<< printLength(b)<<endl;    
    return 0;    
}