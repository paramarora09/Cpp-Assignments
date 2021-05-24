#include <iostream>
#include <math.h>
using namespace std;


class S
{
public:
	int square(int s); // declare the function
};

inline int S::square(int s) // use inline prefix
{
     return pow(s,2);
}

int main() {
    S a;
    cout<<a.square(2);
    return 0;
}