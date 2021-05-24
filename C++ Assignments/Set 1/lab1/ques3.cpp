#include <iostream> 
using namespace std;
namespace pa {
    int a_type=380;
}

int main() {
    int a_type=747;
    cout<<pa::a_type; //prints 380
    cout<<endl<<a_type; //prints 747

}