#include <iostream>
using namespace std; 

class construct
{
public:
	int a, b;

	// Default Constructor
	construct()
	{
		a = 10;
		b = 20;
	}

    construct(int a) {
        a=a; 
    }

    construct(int a,int b) {
        a=a;
        b=b;
    }

    construct(construct &c) {
        a=c.a;
        b=c.b;
    }
};

int main() {
    construct a;
    construct b(2);
    construct c(4,5);
    construct d(c);
    return 0; 

}

