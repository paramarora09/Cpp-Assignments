#include <iostream>
using namespace std;
namespace first {
    int val=1;
    char name[10]="first";
}

namespace second {
    int val=2;
    char name[10]="second";
}

int main() {
    cout<<"From first";
    cout<<endl<<first::val;
    cout<<endl<<first::name;

    cout<<endl<<"From second";
    cout<<endl<<second::val;
    cout<<endl<<second::name;
    return 0;

}